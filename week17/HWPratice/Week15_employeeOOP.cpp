#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Employee {
  private:
    int employeeId;
    double payRate;
    string name;
    int hoursWork;

  public:
    Employee() {
        this->employeeId = 0;
        this->payRate = 0.0;
        this->name = "";
        this->hoursWork = 0;
    }

    Employee(int employeeID, double payRate, string name, int hoursWork) {
        this->employeeId = employeeID;
        this->payRate = payRate;
        this->name = name;
        this->hoursWork = hoursWork;
    }
    ~Employee() {} // deconstructor

    string getName() const {
        return name;
    }
    int getEmployeeID() const {
        return employeeId;
    }
    void setEmployeeId(int employeeId) {
        this->employeeId = employeeId;
    }
    double getPayRate() const {
        return payRate;
    }
    void addTotalHoursWork(int hours) {
        hoursWork += hours;
    }
    double getTotalEarning() const {
        return hoursWork * payRate;
    }
};

template <class T> class LListNode {
  private:
    T* data;
    LListNode<T>* next;
    LListNode<T>* prev;
  
  public:
    LListNode(T* newdata = new T(), LListNode<T>* newNext = nullptr, LListNode<T>* newPrev = nullptr) {
        this->data = newdata;
        this->next = newNext;
        this->prev = newPrev;
    }

    ~LListNode() {
        delete data;
    }

    T* getData() {
        return data;
    }
    friend class LList<T>;
};


template <class T> class LList {
  private:
    LListNode<T>* head;
    LListNode<T>* tail;
    LListNode<T>* current;
    int size;

  public:   
    void push_back(T* data) {
      if(size == 0) {
        LListNode<T>* node = new LListNode<T>(data);
        head = node;
        tail = node;
        current = node;
      }
      else{
          LListNode<T>* node = new LListNode<T>(data);
          tail->next = node;
          node->prev = tail;
          tail = node;
      }
      size++;

    }

    
};

void openInputfile(ifstream& inFile) {
    string fileName;
    cout << "Please enter your file name" << endl;
    cin >> fileName;

    inFile.open(fileName);

    while(!inFile) {
        cout << "Wrong file name Please reenter Again" << endl;
        inFile.clear();
        cin >> fileName;
        inFile.open(fileName);
    }
}

int main() {
    ifstream inFile;
    openInputfile(inFile);

    LList<Employee> emList = LList<Employee>();

    int employeeID;
    double payRate;
    string name;

    while(inFile >> employeeID) {
        inFile >> payRate;
        inFile.ignore(9999, ' ');

    }
    
    return 0;
}