#include <iostream>
using namespace std;

class Student{
  private:
  string name;
  int  roll;
  public:
  Student(){
    name="Default name";
    roll = 7;
  }
  Student(string n, int r){
   name= n;
   roll= r;
  } 
  void display(){
    cout<<"The name of the student is "<<name<<" and his roll number is "<<roll<<endl;
  }
  Student(Student &obj){
    name = obj.name;
    roll = obj.roll;
  }
};

int main(){
      Student obj("Peter Parker", 39);
     
      Student std = (obj);
      std.display();
    
    return 0;
}