#include<iostream>
using namespace std;

class BaseA{
    public:
   void printSomething(){
        cout<<"Calling from BaseA"<<endl;
    }
};

class BaseB{
    public:
    void printSomething(){
        cout<<"Calling from BaseB"<<endl;
    }
};

class Derived: public BaseA, public BaseB{


};

int main(){
 
     Derived der;
     der.BaseA::printSomething();
     der.BaseB::printSomething();
    return 0;
}