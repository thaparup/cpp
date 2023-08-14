#include <iostream>
using namespace std;

int division(int x , int y){
    if(y ==0 ){
      throw  "Division by zero";
    }
    else{
        return x/y;
    }
}
int main(){
         int x = 20;
         int y= 0;
     try{
       double z=  division(x,y);
       cout<<"The divison is "<<z<<endl;
     }
      catch (const char* errorMsg) {
        cout << "Exception caught: " << errorMsg << endl;
    }

    return 0;
}