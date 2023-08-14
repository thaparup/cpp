#include<iostream>
using namespace std;

class MyClass{

private:
int value;
public:
MyClass(int val): value(val){};
void printvalue(){

   cout<<this->value<<endl;
}
  void setValue(int v){
    this->value = v;
  }
  MyClass* getpointer(){
    return this;
  }
};

int main (){

    MyClass obj(2);
    obj.printvalue();
    obj.setValue(46);
    obj.printvalue();
    MyClass *ptr = obj.getpointer();
    ptr->printvalue();
    return 0;
}