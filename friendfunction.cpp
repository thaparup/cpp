#include <iostream>
using namespace std;

class Car {
private:
    string brand;

public:
    friend void display(Car obj);
    void getBrand(string bnd){
        brand= bnd;
    }
};
 
void display(Car obj) {
  
    cout << "The brand of the car is " << obj.brand << endl;
}

int main() {
    Car car;
    car.getBrand("Ferrari");
     display(car) ;
    return 0;
}
