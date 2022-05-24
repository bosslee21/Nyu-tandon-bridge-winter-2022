#include <iostream>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

const int SIZE = 20;

const int ANT_COUNT = 100;
const int ANT_BREEDING_TIME = 3;

const int DOODLEBUG_COUNT = 5;
const int DOODLEBUG_BREEDING_TIME = 8;
const int DOODLEBUG_STEPS_TO_STARVATION = 3;


const int UP = 1;
const int DOWN = 2;
const int LEFT = 3;
const int RIGHT = 4;
const int DIRECTIONS = 4;

const int ANT = 1;
const int DOODLEBUG = 2;

const char EMPTY_CELL = '-';
const char ANT_CELL = 'o';
const char DOODLEBUG_CELL = 'X';

class Organism;
Organism* getCellInDirection(Organism*** board, int locationX, int locationY, int direction);
void stepNext(Organism*** board);

class Organism {
  protected:
    int locationX;
    int locationY;
    int survivingDays;
    char symbol;
  public:
    // Constructor
    Organism() {
        locationX = -1;
        locationY = -1;
        survivingDays = 0;
        symbol = EMPTY_CELL;
    }

    Organism(int locationX, int locationY) {
        this->locationX = locationX;
        this->locationY = locationY;
        survivingDays = 0;
        symbol = EMPTY_CELL;
    }
    
    // Actions
    virtual void move(Organism*** board) {}
    virtual void breed(Organism*** board) {}
    

    // Accessor
    int getLocationX()const {
        return locationX;
    }

    void setLocationX(int locationX) {
        this->locationX = locationX;
    }

    int getLocationY()const {
        return locationY;
    }

    void setLocationY(int locationY) {
        this->locationY = locationY;
    }

    int getSurvivingDays() const {
        return survivingDays;
    }

    char getSymbol() const {
        return symbol;
    }
};

class Ant : public Organism {
  public:
    Ant(int locationX, int locationY) : Organism(locationX, locationY) {
        this->symbol = ANT_CELL;
    }

    void move(Organism*** board) override {
        int randomMove = rand() % DIRECTIONS + 1;
        Organism* nextCell = getCellInDirection(board, locationX, locationY, randomMove);

        // Move only if valid.
        if (nextCell != nullptr && nextCell->getSymbol() == EMPTY_CELL) {
            int newX = nextCell->getLocationX();
            int newY = nextCell->getLocationY();
            board[locationY][locationX] = new Organism(locationX, locationY);
            board[newY][newX] = this;
            locationX = newX;
            locationY = newY;
            delete nextCell;
        }

        survivingDays++;
    }

    void breed(Organism*** board) override {
        if (survivingDays != 0 && survivingDays % ANT_BREEDING_TIME == 0) {
            for (int direction = UP; direction <= RIGHT; direction++) {
                Organism* nextCell = getCellInDirection(board, locationX, locationY, direction);
                if (nextCell != nullptr && nextCell->getSymbol() == EMPTY_CELL) {
                    int newX = nextCell->getLocationX();
                    int newY = nextCell->getLocationY();

                    board[newY][newX] = new Ant(newX, newY);
                    delete nextCell;
                    break;
                }
            }
        }
    }
};

class Doodlebug : public Organism {
  private:
    int eatenAnt;

  public:
    Doodlebug(int locationX, int locationY) : Organism(locationX, locationY) {
        this->symbol = DOODLEBUG_CELL;
        this->eatenAnt = 0;
    }
    void move(Organism*** board) override {
        survivingDays++;
        int randomMove = rand() % DIRECTIONS + 1;
        Organism* nextCell = getCellInDirection(board, locationX, locationY, randomMove);
        
        // Move only if valid.
        if (nextCell != nullptr && (nextCell->getSymbol() == EMPTY_CELL || nextCell->getSymbol() == ANT_CELL)) {
            int newX = nextCell->getLocationX();
            int newY = nextCell->getLocationY();

            if(nextCell->getSymbol() == ANT_CELL) {
                eatenAnt = survivingDays;
            }

            // make this location empty '-' and move to new location
            board[locationY][locationX] = new Organism(locationX, locationY);
            board[newY][newX] = this;
            locationX = newX;
            locationY = newY;
            delete nextCell;
        }
    }

    void breed(Organism*** board) override {
        if (survivingDays != 0 && survivingDays % DOODLEBUG_BREEDING_TIME == 0) {
            for (int direction = UP; direction <= RIGHT; direction++) {
                Organism* nextCell = getCellInDirection(board, locationX, locationY, direction);
                if (nextCell != nullptr && nextCell->getSymbol() == EMPTY_CELL) {
                    int newX = nextCell->getLocationX();
                    int newY = nextCell->getLocationY();

                    board[newY][newX] = new Doodlebug(newX, newY);
                    // delete nextCell;
                    break;
                }
            }
        }
    }

    void starve(Organism*** board)  {
        if(survivingDays - eatenAnt >= 3) {
            Organism* cell = board[locationY][locationX];
            board[locationY][locationX] = new Organism(locationX, locationY);
            delete cell;
        }
    }
    
};

Organism* getCellInDirection(Organism*** board, int locationX, int locationY, int direction) {
    int newX, newY;
    if(direction == LEFT) {
        newX = locationX - 1;
        newY = locationY;
    }
    else if(direction == RIGHT) {
        newX = locationX + 1;
        newY = locationY;
    }
    else if(direction == UP) {
        newX = locationX;
        newY = locationY - 1;
    }
    else{
        newX = locationX;
        newY = locationY + 1;
    }

    if (newX >= 0 && newX < SIZE && newY >= 0 && newY < SIZE) {
        return board[newY][newX];
    }
    return nullptr;
}

void stepNext(Organism*** board) {
    vector<Organism*> ants;
    vector<Organism*> doodlebugs;
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if(board[i][j]->getSymbol() == DOODLEBUG_CELL) {
                doodlebugs.push_back(board[i][j]);
            }
        }
    }

    for(Organism* doodlebug: doodlebugs) {
        doodlebug->move(board);
        doodlebug->breed(board);
        ((Doodlebug*) doodlebug)->starve(board);
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j]->getSymbol() == ANT_CELL) {
                ants.push_back(board[i][j]);
            }
        }
    }

    // Move and breed
    int i = 0;
    for (Organism* ant : ants) {
        i++;
        ant->move(board);
        ant->breed(board);
    }
}

void printState(Organism*** board) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << board[i][j]->getSymbol();
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    srand(time(NULL));

    // Initialize board
    Organism*** board = new Organism**[SIZE];
    for (int i = 0; i < SIZE; i++) {
        board[i] = new Organism*[SIZE];
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = new Organism(j, i);
        }
    }

    for (int i = 0; i < ANT_COUNT; i++) {
        while (true) {
            int x = rand() % SIZE;
            int y = rand() % SIZE;
            Organism* cell = board[y][x];
            if (cell->getSymbol() == EMPTY_CELL) {
                board[y][x] = new Ant(x, y);
                delete cell;
                break;
            }
        }
    }

     for (int i = 0; i < DOODLEBUG_COUNT; i++) {
        while (true) {
            int x = rand() % SIZE;
            int y = rand() % SIZE;
            Organism* cell = board[y][x];
            if (cell->getSymbol() == EMPTY_CELL) {
                board[y][x] = new Doodlebug(x, y);
                delete cell;
                break;
            }
        }
    }
    // program will exit if other key is input.
    string input;
    printState(board);
    cout << "Press Enter to initiate next step" << endl;
    getline(cin, input);
    while (input == "") {
        stepNext(board);
        printState(board);
        cout << "Press Enter to initiate next step" << endl;
        getline(cin, input);
    }

    // clean up
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            delete board[i][j];
        }
        delete[] board[i];
    }
    delete[] board;
}


