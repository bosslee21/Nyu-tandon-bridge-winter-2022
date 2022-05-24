#include <iostream>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

const int SIZE = 3;

const int ANT_COUNT = 1;
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
bool setEmptyCellInDirection(Organism*** board, int locationX, int locationY, int direction, Organism& o);
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
        }

        survivingDays++;
    }

    void breed(Organism*** board) override {
        int x = rand();
        if (survivingDays % ANT_BREEDING_TIME == 0) {
            for (int direction = UP; direction <= RIGHT; direction++) {
                cout << x << endl;
                Organism* nextCell = getCellInDirection(board, locationX, locationY, direction);
                if (nextCell != nullptr && nextCell->getSymbol() == EMPTY_CELL) {
                    int newX = nextCell->getLocationX();
                    int newY = nextCell->getLocationY();

                    board[newY][newX] = new Ant(newX, newY);
                    break;
                }
            }
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

bool setEmptyCellInDirection(Organism*** board, int locationX, int locationY, int direction, Organism& o) {
    Organism* ptr = getCellInDirection(board, locationX, locationY, direction);
    if (ptr != nullptr) {
        *ptr = o;
        return true;
    }
    return false;
}

void stepNext(Organism*** board) {
    // First move
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j]->move(board);
        }
    }

    // Then breed
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j]->breed(board);
        }
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
                cout << y << endl;
                cout << x << endl;
                board[y][x] = new Ant(x, y);
                break;
            }
        }
    }

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
}



// class Board {
//   private:
//     Organism world[SIZE][SIZE];
//     vector<Ant> ants;
//     //vector<Doodlebug> doodlebugs;

//   public:
//     Organism getCell(int locationX, int locationY) {
//         return world[locationY][locationX];
//     }
//     void setCell(int locationX, int locationY, Organism& o) {
//         world[locationY][locationX] = o;
//     }

//     void printBoard() {
//         for(int i = 0; i < SIZE; i++) {
//             for(int j = 0; j < SIZE; j++) {
//                 cout << world[i][j].getSymbol();
//             }
//             cout << endl;
//         }
//     }

//     Organism getCellInDirection(int locationX, int locationY, int direction) {
//         int newX, newY;
//         if(direction == LEFT) {
//             newX = locationX - 1;
//             newY = locationY;
//         }
//         else if(direction == RIGHT) {
//             newX = locationX + 1;
//             newY = locationY;
//         }
//         else if(direction == UP) {
//             newX = locationX;
//             newY = locationY - 1;
//         }
//         else{
//             newX = locationX;
//             newY = locationY + 1;
//         }

//         if (newX >= 0 && newX < SIZE && newY >= 0 && newY < SIZE) {
//             return world[newY][newX];
//         }
//         return NULL;
//     }
// };