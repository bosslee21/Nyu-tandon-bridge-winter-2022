#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

template <class T> class LList;


class Employee {
  private:
  //encapsulation
    int employeeId;
    double payRate;
    string name;
    int hoursWorked;
  
  public:
  //constructor
    Employee() {
        this->employeeId = 0;
        this->payRate = 0.0;
        this->name = "";
        this->hoursWorked = 0;
    }

    Employee(int employeeId, double payRate, string name) {
        this->employeeId = employeeId;
        this->payRate = payRate;
        this->name = name;
        this->hoursWorked = 0;
    }

    ~Employee() {}

     // - getter / setter
    string getName() const { 
        return name;
    }
   
    int getEmployeeId() const {
        return employeeId;
    }
    void setEmployeId(int employeeId) {
        this->employeeId = employeeId;
    }
    double getPayRate() const {
        return payRate;
    }
    void addTotalHoursWorked(int hours) {
        hoursWorked += hours;
    }
    double getTotalEarning() const {
        return hoursWorked * payRate;
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

    T* getData() const {
        return data;
    }

    friend class LList<T>;
};

template <class T> 
class LList {
  private:
    LListNode<T>* head;
    LListNode<T>* tail;
    LListNode<T>* current;
    int size;

  public:
    LList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
        current = nullptr;
    }

    ~LList() {
        current = head;
        while (current != nullptr) {
            LListNode<T>* next = current->next;
            delete current;
            current = next;
        }
    }

    void push_back(T* data) {
        if(size == 0) {
            LListNode<T>* node = new LListNode<T>(data);
            head = node;
            tail = node;
            current = node;
        } else {
            LListNode<T>* node = new LListNode<T>(data);
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
        size++;        
    }

    int getSize() const {
        return size;
    }

    T* getIndex(int i) const {
        LListNode<T>* temp = head;
        for(int j = 0; j < i; j++) {
            temp = temp->next;
        }
        return temp->data;
    }

    LListNode<T>* getNextNode() {
        if (current == nullptr) {
            return nullptr;
        }
        LListNode<T>* temp = current;
        current = current->next;
        return temp;
    }

    void resetIterator() {
        current = head;
    }

    void sort() {
        int newSize = size;
        LListNode<T>* newHead;
        LListNode<T>* newTail;

        current = head;
        for (int i = 0; i < size; i++) {
            LListNode<T>* maxNode = current;
            LListNode<T>* temp = current;
            while (temp != nullptr) {
                if (temp->getData()->getTotalEarning() > maxNode->getData()->getTotalEarning()) {
                    maxNode = temp;
                }
                temp = temp->next;
            }

            Employee* e = maxNode->data;
            maxNode->data = current->data;
            current->data = e;
            current = current->next;
        }
        current = head;
    }
};


void openInputFile(ifstream& inFile, string title) {
    string fileName;
    cout << "Please enter " << title << " file name" << endl;
    cin >> fileName;
    inFile.open(fileName);

    while(!inFile) {
        cout << "File failed to open!" << endl;
        cout << "please re-enter " << title << " file name" << endl;
        cin >> fileName;
        inFile.clear();
        inFile.open(fileName);
    }
}


int main() {
    //employee file
    ifstream emFile;
    openInputFile(emFile, "employee");
    
    LList<Employee> emList = LList<Employee>();

    int employeeId;
    double payRate;
    string name;
    
    while(emFile >> employeeId) {
        emFile >> payRate;
        emFile.ignore(9999,' ');
        getline(emFile,name);
        emList.push_back(new Employee(employeeId, payRate, name));
    }

    ifstream payFile;
    openInputFile(payFile, "payroll");

    int hoursWorked;

    while(payFile >> employeeId) {
        payFile >> hoursWorked;
        for(int i = 0; i < emList.getSize(); i++) {
            Employee* e = emList.getNextNode()->getData();
            if(e->getEmployeeId() == employeeId) {
                e->addTotalHoursWorked(hoursWorked);
                break;
            }
        }
        emList.resetIterator();
    }

    emList.sort();
    cout << "*********Payroll Information********" << endl;
    for(int i = 0; i < emList.getSize(); i++) {
        Employee* e = emList.getNextNode()->getData();
        cout << e->getName() << ", $" << e->getTotalEarning() << endl;
    }
    cout<< "*********End payroll**************" << endl;

    return 0;
}