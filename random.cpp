#include <iostream>
using namespace std;
 
inline int areaOfSquare(double x){
    return x*x;
}
int main(){

     double result = areaOfSquare(3);
     cout<<result;
    return 0;
}