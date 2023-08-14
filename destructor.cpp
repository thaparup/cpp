#include <iostream>
using namespace std;


class Car{
    private: 
    string brand;
    public:
    Car(string bnd){
        brand = bnd;
        cout<<"Car created by the name of "<<brand<<endl;
    }
    ~Car(){
        cout<<"Car has been deleted and deallocated";
    }
};
int main(){
    Car obj("Toyata");
    return 0;
}