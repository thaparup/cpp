#include <iostream>
using namespace std;
 

 class classB;
 class classA{
 private:
 int numA;
 public:
 classA(int x): numA(x){};
  friend int friendFunc(classA objA  , classB objB);
  void getInputA(int n){
    numA = n;
  }

  
};

class classB{
 private:
 int numB;
 public:
 classB(int x ): numB(x){};
  friend int friendFunc(classA objA,classB objB);
 

  
};

int friendFunc  (classA objA,classB objB ){
   return objA.numA + objB.numB; 
}
int main(){

     
     classA obj1(12);
     classB obj2(12);
     int result = friendFunc(obj1, obj2);
     cout<<result;
    return 0;
}