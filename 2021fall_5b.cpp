#include <iostream>
using namespace std;

class Shape{
  protected:
  double length, breadth;
  public:
  void findArea(){
    cout<<"The area of Shape";
  }

};

class Rectangle: public Shape{
     public:
     Rectangle(double a , double b){
        length = a;
        breadth = b;
     }
     public:
    void findArea(){
        cout<<"The area of the rectangle is "<<length * breadth<<endl;
    }

};

int main(){
 
    Rectangle rec(3,3);
    rec.findArea();

    return 0;
}