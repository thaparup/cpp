#include <iostream>
using namespace std;

class Complex{

    private:
    double real , imag;
    public :
    Complex (double x, double y): real(x), imag(y){};
    Complex operator +  (const Complex& complex){
        return Complex(real + complex.real , imag + complex.imag );
    }
    void display(){
        cout<<"real: "<<real<<" imaginary: "<<imag<<endl;
    }


};

int main(){

    Complex com(12,12);
    Complex com2(12,19);
    Complex com3 = com + com2;
    com3.display();
    
    return 0;
}
