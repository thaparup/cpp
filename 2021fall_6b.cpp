#include <iostream>
using namespace std;

template <typename T>
class ArraySum {
private:
    T* array;
    int size;

public:
    ArraySum(T* arr, int s) : array(arr), size(s) {}

    T calculateSum() {
        T sum = 0;  // Initialize sum to default value (0 for int, float, etc.)

        for (int i = 0; i < size; ++i) {
            sum += array[i];
        }

        return sum;
    }
};

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.5, 2.5, 3.5, 4.5, 6};

    ArraySum<int> obj1(intArray, 5);
    ArraySum<float> obj2(floatArray, 5);

    int sumInt = obj1.calculateSum();
    float sumFloat = obj2.calculateSum();

    cout << "Sum of integers: " << sumInt << endl;
    cout << "Sum of floating point numbers: " << sumFloat << endl;

    return 0;
}
