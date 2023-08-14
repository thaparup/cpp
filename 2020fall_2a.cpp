#include <iostream>
using namespace std;


class Car{
    private:
    string brand, model;
    public:
    Car(string a, string b): brand(a), model(b){
        cout<<"Object created"<<endl;
    };
    ~Car(){
        cout<< "Objects deleted"<<endl;
    }
};

int main(){
     
      Car car("Tyota", "model-s");
    return 0;
}