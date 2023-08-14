#include<iostream>
using namespace std;

class VirtalFunction{

    protected:
    int value;
     public: 
     VirtalFunction(int x): value(x){};
     virtual void display(){
        cout<<"Calling the function from Parent class "<<value<<endl;
      }
};
class Derived: public VirtalFunction{
    public:
    Derived(int x): VirtalFunction(x){};
    void display()override{
        cout<< "Calling from derived class "<<value<<endl;
    }
};

int main(){
    Derived der(23);
    der.display();
    return 0;
}