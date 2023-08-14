#include <iostream>
using namespace std;


 class Student{
    private:
    string name;
    int roll;
    public:
    Student(string n, int r){
    this->name=n;
    this->roll=r;
    }
    void dis(){
        cout<< "The values are "<<name<<roll<<endl;
    }
 };
int main(){

  Student std("Peter Parker", 200);
  std.dis();
return 0;
}