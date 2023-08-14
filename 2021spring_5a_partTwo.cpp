#include <iostream>
using namespace std;


class PureVitualFunction{

    protected:
    int value;
    public:
    PureVitualFunction(int x): value(x){};
    virtual void display() = 0;
};

class Derived : public PureVitualFunction{
    public : 
    Derived ( int x) : PureVitualFunction(x){};
    void display(){
        cout<< "Calling from Derived class "<<value<<endl;
    }
};

int main (){
     Derived der(2);
     der.display();
    return 0;
}