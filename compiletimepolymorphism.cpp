#include <iostream>
using namespace std;

class Calc{
    private:
      int num1;
      int num2;
      double num3;
      double num4;
      public:
      Calc(int n1, int n2){
        num1 = n1;
        num2 = n2;
        cout<<"the sum is "<<num1 + num2<<endl;
      };

      Calc(double n1, double n2): num3(n1), num4(n2){
        cout<<"the double addtion is "<<num3+ num4<<endl;
      };
   
};

int main(){
     Calc obj1(30, 40);
     Calc obj2(34.34, 34.34);
    return 0;
}