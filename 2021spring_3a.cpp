#include <iostream>
using namespace std;


class ParentA{

  protected: 
  int valueA;
  public: 
  ParentA(int x): valueA(x){ cout<<"The value of ParentA is "<<valueA<<endl;};

};

class ParentB{
    protected:
    int valueB;

    public:
    ParentB(int x): valueB(x){cout<<"The value of parent B is "<<valueB<<endl;}
 
};

class Derived: public ParentA, public ParentB{
     public:   
     Derived(int x): ParentA(x), ParentB(x){
        cout<<"The value of derived class is "<<x<<endl;
     }
};

int main (){


    Derived derived(32);
  
    return 0;
}