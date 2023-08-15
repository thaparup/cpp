#include <iostream>
using namespace std;

void test(int x ){
   try{
    if (x ==0){
        throw "The value of x must not be 0";
    }
    else if(x<0){
        throw "the value of x must not  be less than 0";
    }
    else{
       cout<<"The value of x is neither zero nor less than zero";
    }
   }
   catch(const char* errorMsg){
    cout<<errorMsg<<endl;
   }
   catch(int err){
    cout<<"The value of x is not 0 or greater than 0"<<endl;
   }
   catch(...){
    cout<<"Unknown exception"<<endl;
   }
}

int main(){

      test(4);
    return 0;
}