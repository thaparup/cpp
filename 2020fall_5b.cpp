#include <iostream>
using namespace std;


class Polygon{
    protected: 
    int length, height;
    public:
    Polygon(int len, int hgt):length(len), height(hgt){} ;
    virtual void Area() = 0;
};
class Rectangle : public Polygon{
    public:
    Rectangle(int len, int hgt): Polygon(len, hgt){};
    void Area()override{
        cout<< "The area of rectangle is "<<length * height<<endl ;
    }
};
class Triangle : public Polygon{
    public:
    Triangle(int len, int hgt): Polygon(len,hgt){};
    void Area()override{
        cout<< "The area of Triangle is "<<  0.5 * (length * height)<<endl ;
    }
};

int main(){

    Rectangle rec(3,3);
    rec.Area();
    Triangle tri(2,2);
    tri.Area();
    return 0;
}
