#include<iostream>
using namespace std;

void test(int x){

    try{


    if (x == 0){
        throw "The value cannot be zero";
    }
    else if(x<0){
        throw "The value cannot be less than 0";
    }
    }
    catch( const char* errorMessage){
         cout<<"Exception caught: "<<errorMessage<<endl;
    }

}

int main (){

    test(-6);
    return 0;
}