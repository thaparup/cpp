#include <iostream>
using namespace std;

class classA{
 private:
 int num;
 public:
  friend int addA(classA obj);
  void getInputA(int n){
    num = n;
  }

  
};
class classB{
 private:
 int num;
 public:
  friend int addB(classB obj);
  void getInputB(int n){
    num = n;
  }

  
};

 int addA(classA obj){
     return obj.num;
 }

 int addB(classB obj){
    return obj.num;
 }


int main(){

     classA obj1;
    obj1.getInputA(20);
    classB obj2;
    obj2.getInputB(20);
    int result = addA(obj1) + addB(obj2);
    cout<<result<<endl;
    return 0;
}