#include <iostream>
using namespace std;


class Person{
    protected:
    int personage;
    string personname;

};

class Employee{
    protected:
    int employeeid;
    string employeename;
};

class Manager: public Person,public Employee{
    public:
    void setEmployee(string empName, int empId){
      employeename = empName;
      employeeid = empId;
    }

    void setPerson(string name, int age){
        personname = name;
        personage = age;
    }
    void displayEmp(){
        cout<<"The name of the employee is "<<employeename<< " and his id is "<<employeeid<<endl;
    }
    void displayPerson(){
        cout<<"The name of the prson is "<<personname<< " and his age is "<<personage<<endl;
    }
};

int main(){

     Manager manager;
     manager.setEmployee("Harrr Potter", 20);
     manager.setPerson("Peter Parker", 30);
     manager.displayEmp();
     manager.displayPerson();
    return 0;
}