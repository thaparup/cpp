// #include <iostream>
// using namespace std;

// void changeValue(int& value) {
//     value = 2;
// }
// void changeValuePointer(int* x) {
//     *x = 10;
// }
// int main() {
//     int num = 5;
//     cout << "Before: " << num << endl;
    
   
    

//     changeValuePointer(&num);
//     cout << "After: " << num << endl;
    
//     return 0;
// }


#include <iostream>
using namespace std;

void modifyByPointer(int* ptr) {
    *ptr = 2;
}

int main() {
    int num = 5;
    cout << "Before: " << num << endl;
    
    modifyByPointer(&num);
    
    cout << "After: " << num << endl;
    
    return 0;
}
