#include <iostream>
using namespace std;

class Base{
    private:
    int basenumber;
    public:
    Base(int n): basenumber(n){
        cout<<"base " <<basenumber<<endl;;
    };
};

class Derived: public Base{
   private:
   int derivednumber;
   public: 
   Derived(int a , int b ): derivednumber(a), Base(b) {
    cout<<"derived "<<derivednumber<<endl;
   
   };

};

int main (){


    Derived der(20, 30);  
    return 0;
}