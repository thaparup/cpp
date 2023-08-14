#include <iostream>
using namespace std;


class Shape{
protected:
  int length, breadth;
  public: 
  Shape(int len, int bdt){
    length = len;
    breadth = bdt;
  }
   virtual void calc(){
    cout<<length*breadth<<endl;
  }
};

class Rectangle : public Shape{
     public:
        
      Rectangle(int len, int bdt): Shape(len, bdt){};
  void calc()override{
    cout<<"function overriding"<<endl;;
    cout<<length*breadth<<endl;
  }
};

int main (){
    
     Rectangle rec(4,2);
     rec.calc();
     Shape shp(2,2);
     shp.calc();
    return 0;
}