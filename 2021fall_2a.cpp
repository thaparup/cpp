#include <iostream>
using namespace std;


class B;
class A{

    private:
    int numA;
    public:
    A(int num): numA(num){};
    void display(){
        cout<<"class A value "<<numA<<endl;
    }
     friend void swapData(A& a, B& b);
};

class B{
    private:
    int numB;
    public:
    B(int num): numB(num){};
    void display(){
        cout<<"class B value "<<numB<<endl;
    }
     friend void swapData(A& a, B& b);

};

 void swapData(A& a, B& b){
    int temp = a.numA;
    a.numA = b.numB;
    b.numB = temp;

}

int main(){

    A objA(5);
    B objB(10);
    cout<<"Before swapping"<<endl;
    objA.display();
    objB.display();
    cout<<"After swapping"<<endl;
    swapData(objA, objB);
    objA.display();
    objB.display();

    return 0;
}
