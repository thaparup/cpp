#include <iostream>
using namespace std;

// Base class: Person
class Person {
private:
    string perName;
    int perAge;

public:
    Person(string name, int age){
        perName = name;
        perAge = age;
    }

    void displayPerson() {
        cout << "Person: " << perName << " (" << perAge << " years old)" << endl;
    }
};


class Employee {
private:
    string empName;
    int empId;

public:
    Employee(string name, int id)  {
      this->empName = name;
      this->empId = id;
    }

    void displayEmployee() {
        cout << "Employee: " << empName << " (ID: " << empId << ")" << endl;
    }
};

class Manager : public Person, public Employee {


public:
      Manager(string employeeName, int employeeId, string personName, int personAge): Person(personName, personAge), Employee(employeeName, employeeId){
        
      }
 
};

int main() {
    Manager manager("Peter Parker", 30, "John", 12);
    manager.displayEmployee();
    manager.displayPerson();
    
    
    return 0;
}
