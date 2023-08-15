#include <iostream>
using namespace std;

class Shape{
  protected:
  double length, breadth;
  public:
  Shape(double b ,double c):length(b), breadth(c){};
   virtual void findArea(){
    cout<<"The area of Shape "<< length * breadth;
  }

};

class Rectangle: public Shape{
     public:
     Rectangle(double a , double b): Shape(a ,b){
    
     };
     public:
    void findArea() override{
        cout<<"The area of the rectangle is "<<length * breadth<<endl;
    }

};

int main(){
 
    Rectangle rec(3,3);
    rec.findArea();
    Shape sh(4,4);
    sh.findArea();
    return 0;
}