#include <iostream>
using namespace std;


template <typename T>
T addition(T x){
  // cout<< "The value of single parameter template function is "<<z<<endl;
  return x;
}
template <typename T>  
T addition(T x, T y){
  return x +y;
}



int main (){
    cout<< addition <int>(4);
    cout<<addition <string>("Peter Parker");
    addition <double>(3.3);
    
    cout<<addition <int>(4,4)<<endl;
    cout<<addition <double>(3.3, 5.9)<<endl;
    cout<<addition <string>("Peter ", "Parker");
}






// template <typename T>
// T add(T a, T b) {
//     cout << "Using template add function." << endl;
//     return a + b;
// }

// // Non-template function to add two integers
// int add(int a, int b) {
//     cout << "Using non-template add function." << endl;
//     return a + b;
// }

// int main() {
//     int intResultTemplate = add(5, 10); // Calls the non-template function
//     int intResultNonTemplate = add<int>(5, 10); // Calls the template function

//     cout << "Result from template function: " << intResultTemplate << endl;
//     cout << "Result from non-template function: " << intResultNonTemplate << endl;

//     return 0;
// }
