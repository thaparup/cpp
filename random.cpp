#include <iostream>
using namespace std;


class Meter{
   private:
   double meter;
   public:
   Meter(double m): meter(m){};
   void display(){
    cout<<meter<<endl;
   }
};

class CM{
    private:
    double cm;
    public:
    CM(double a): cm(a){};
    void display(){
        cout<<cm<<endl;
    }
    operator Meter(){
        double meter = cm/100;
        return Meter(meter);
    }
};

int main() {
    
     CM obj1(150);
     Meter obj2 = obj1;
     obj1.display();
     obj2.display();

     
    return 0;
}
