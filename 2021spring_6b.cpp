#include <iostream>
using namespace std;


class ClassB;
class ClassA{
    private: 
    int valueA;
    public: 
    ClassA(int x): valueA(x){};
    friend void friendFunction(ClassA &objA, ClassB &objB);
};

class ClassB{
    private:
    int valueB;
    public: 
    ClassB(int x): valueB(x){};
    friend void friendFunction(ClassA &objA, ClassB &objB);
};

void friendFunction(ClassA &objA, ClassB &objB){
    cout<< "Friend function executed "<<endl;
  cout<<"Data member of Class A is "<<objA.valueA<<" and the data member of class B is "<<objB.valueB<<endl;
}

int main(){

    ClassA obj1(33);
    ClassB obj2(23);
    friendFunction(obj1, obj2);
   
    return 0;
}            