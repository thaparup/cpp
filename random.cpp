#include <iostream>
using namespace std;
 
class Student{

    private:
    string name;
    int roll;
    public: 
    Student(){
       name= "no name";
       roll = 007;
    }

    Student(string n, int r): name(n), roll(r){};

    Student(Student &student){
      name = student.name; 
      roll = student.roll;
    }
    void display(){
        cout<< "Name: "<<name<<" and roll is "<<roll<<endl;
    }
};
int main() {

   
    Student std2 ("Peter Parker", 33);
    std2.display();
    Student std3;
    std3.display();
    Student std4 = std2;
    std4.display();
    return 0;
}
