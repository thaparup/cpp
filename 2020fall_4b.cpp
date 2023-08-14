#include <iostream>
using namespace std;


class MyObject{
    private: 
    int x;
    public:
    MyObject(){
        x = 10;
        cout<<"Objects created "<<x<<endl;
    }
    ~MyObject(){
        cout<<"Objects destroyed";
    }
   
};

int main (){

    MyObject* object = new MyObject();  //Creating a dynamic object of type MyObject
    delete object;

    return 0;
}

// In this example, the new keyword allocates memory for a new integer. The *p operator is used to access the value of the integer. The delete keyword deallocates the memory that was allocated for p.

// Dynamic memory allocation is useful for allocating memory for objects that are not known at compile time. For example, you can use dynamic memory allocation to allocate memory for a dynamically growing array.

// However, it is important to note that dynamic memory allocation can be a source of memory leaks. A memory leak occurs when memory that is allocated using the new keyword is not deallocated using the delete keyword. This can lead to a shortage of memory, which can eventually crash the program.

// To avoid memory leaks, it is important to use the delete keyword to deallocate all memory that was allocated using the new keyword. You can also use the smart pointers to manage memory allocation automatically.