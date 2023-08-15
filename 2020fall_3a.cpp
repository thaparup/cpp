

#include <iostream>
using namespace std;
 
class Person{
    protected:
    int personage;
    string personname;
    public: 
    void putData(int x , string y){
        personage = x;
        personname = y;
    }
    
    void display(){
        cout<< "Person's name: "<<personname<< " and the age is "<<personage<<endl;
    }

};

class Employee{
    protected:
    int employeeid;
    string employeename;
    public:
    void putData(int x, string y){
        employeeid = x;
        employeename = y;
    }
    void display(){
        cout<<"Employee's name "<<employeename<<" and id is "<<employeeid<<endl;
    }
};

class Manager: public Employee, public Person{
    private:
    int id;
    string name;
    public :
    void putData(int x , string y){
         id = x;
         name = y;
    }
    void display(){

        cout<<name<<" "<< id<<endl;
    }
}; 

int main(){

  
      
    return 0;
}