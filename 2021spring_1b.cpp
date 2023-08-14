#include<iostream>
using namespace std;


class ClassPublic{
   public:
   int publicValue;
   void publicMethod(){
    
     cout<<"The public value is "<<publicValue<<endl;
   }

};

class ClassPrivate{
    private: 
    int privateValue;
    public:
    ClassPrivate(int val): privateValue(val){};
    void displayPrivate(){
        cout<<"the private value is "<<privateValue<<endl;
    }
};

class Parent{
protected:
int protectedValue;
public: 
Parent(int val): protectedValue(val){};

};
class Child : public Parent{
     public:
    Child(int val): Parent(val){};
    void displayProtected(){
        cout<<"the protected value is "<<protectedValue<<endl;
    }
};

int main(){


     ClassPublic obj1;
     obj1.publicValue = 21;
     
     obj1.publicMethod();
     ClassPrivate obj2(33);
     obj2.displayPrivate();
     Child obj3(55);
     obj3.displayProtected();

     
    return 0;
}