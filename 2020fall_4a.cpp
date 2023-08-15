#include <iostream>
using namespace std;


class Class_A{
    private:
    int privateNumber;
    public: 
    Class_A(int num): privateNumber(num){};
    void display(){
        cout<<"the value is " <<privateNumber;
    }
};


int main(){
    
    int number = 10; 
    Class_A obj = number;
    obj.display();
    Class_A obj1(111);
    obj1.display();
    return 0;
}