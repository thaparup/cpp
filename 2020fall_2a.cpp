#include <iostream>;
using namespace std;


class Car{
    private:
    string brand, model;
    public:
    Car(string a, string b): brand(a), model(b){
        cout<<"Object created";
    };
    ~Car(){
        cout<< "Objects deletd";
    }
};

int main(){
     
      Car car("Tyota", "model-s");
    return 0;
}