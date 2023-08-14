#include<iostream>
using namespace std;



  class Student{
    private: 
    static int totalStudents;
    string name;
    public:
    Student (string n ): name(n){totalStudents++;};
    void display(){
        cout<<"Name: "<< name<<endl;
    }   
     static int getTotal(){
        return totalStudents;
     }
  };

  int Student::totalStudents = 0;
  
int main(){

     Student std1("Peter Parker");
     Student std2 ("Harry Potter");
     Student std3 ("Ram Kumar");
     std1.display();
     std2.display();
     std3.display();
      cout<<std1.getTotal()<<endl;
      cout<<std2.getTotal()<<endl;
      cout<<std3.getTotal()<<endl;
     
    return 0;
}