#include<iostream>
using namespace std;


template <typename T>

class Sum{
    private:
    T* array;
    int size;
    public:
    Sum(T* arr, int s): array(arr), size(s){};
    T calculateSum(){
     T sum = 0; 
     for (int i = 0; i<size; i++){

        sum += array[i];
     }
         return sum;
    }
};

int main(){

    int array1 []= {1,2,3,4,5,6,7};
    float array2 [] = {1.2, 12.2, 12,2,12};
    Sum <int> obj1(array1, 7);
    Sum<float> obj2(array2, 5);
    int result1 = obj1.calculateSum();
    float result2 = obj2.calculateSum();
    cout<<result1<<endl;
    cout<<result2<<endl;

    return 0;
}