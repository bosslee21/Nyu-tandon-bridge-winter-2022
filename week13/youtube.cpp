#include <iostream>
using namespace std;

class AbstractEmployee {
   virtual void askForPromotion() = 0;


};

class Employee: AbstractEmployee {
  private: 
  //encapsulated 3 variable
    
    string company;
    int age;
  protected:
    string name;

    
  public:
    void IntroduceYourself(){
        cout << "Name is " << name << endl;
        cout << "I go to company " << company << endl;
        cout << "my age is " << age << endl;
        cout << endl;
    }
    ///constructor
    Employee(string name, string company, int age) {
        this->name = name;
        this->company = company;
        this->age = age;
    }

    //encapsulation - getter / setter
    string getName() const {
        //return name in private:
        return name;
    }
    void setName(string name) {
        this->name = name;
    }

    string getCompanyName() const {
        // objective in class not parameter
        return company;
    }
    void setCompanyName(string company) {
        this->company = company;
    }

    int getAge() const {
        return age;
    }
    void setAge(int age) {
        if(age >= 18 ) {
            this->age = age;
        }
    }
    // top class abstract employee
    void askForPromotion() {
        if(age > 30) {
            cout << name << " got promoted" << endl;
        }
        else {
            cout << name << " no promotion for you" << endl;
            
        }
        
    }
    virtual void work() {
        cout << name << " is check email, task backlog, performing backlog" << endl;
    }

};
// developer is derieved class  employee is base class
class Developer: public Employee {
  public: 
    string favoriteLanguage;

    Developer(string name, string company, int age, string language) 
        :Employee(name,company,age)  {
        this->favoriteLanguage = language;
        }
    
    void fixBug() {
        cout << name << " Fixed bug using " << favoriteLanguage << endl;
    }

    void work() {
        cout << name << " is writing" << favoriteLanguage << endl;
    }

    

};

class Teacher : public Employee {
  public:
    string subject;

    void preparedLesson() {
        cout << name << "is preparing lesson on " << subject << endl;
    }

    Teacher(string name, string company, int age, string subject) 
        :Employee(name,company,age) {
            this->subject = subject;
        }
    
    void work() override {
        cout << name << " is teaching" << subject << endl;
    }
    
};


int main() {

    // Employee employee1;
    // employee1.name = "John";
    // employee1.company = "Microsoft";
    // employee1.age = 25;
    // employee1.IntroduceYourself();
    
    Employee employee1 = Employee("Isaac", "Google", 31);
    // employee1.setAge(40);
    // cout << employee1.getName() << " " << employee1.getCompanyName() << " " << employee1.getAge() << endl;

    Employee employee2 = Employee("Jae", "Google", 27);
    // employee2.IntroduceYourself();
    employee1.askForPromotion();

    Developer a = Developer("Jae", "Google", 27, "C++");
    a.fixBug();
    a.askForPromotion();

    Teacher t = Teacher("Jiyoon", "Samsung", 29, "Data Science");
    t.preparedLesson();
    t.askForPromotion();
    t.getCompanyName();

    a.work();
    t.work();

    // polymorph - virtual function
    Employee* e1 = &a;
    Employee* e2 = &t;
    e1-> work();
    e2-> work();
   
    return 0;
}