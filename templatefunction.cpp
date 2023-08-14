#include <iostream>
using namespace std;

template <typename T>
 T findMax(T x, T y){
    return (x>y)? x:y;
}


int main(){


     cout<<findMax<double>(22.2, 12);
    return 0;
}