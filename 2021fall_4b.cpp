
#include <iostream>
using namespace std;

class Meter {
private:
    double meters;

public:
    Meter(double m) : meters(m) {}



    void display() {
        cout << "Length in meters: " << meters << " m" << endl;
    }
};

class Centimeter {
private:
    double centimeters;

public:
    Centimeter(double cm) : centimeters(cm) {}

    double getCentimeters() const {
        return centimeters;
    }

    // Conversion operator from Centimeter to Meter
    operator Meter() const {
        double meters = centimeters / 100.0;
        return Meter(meters);
    }

    void display() const {
        cout << "Length in centimeters: " << centimeters << " cm" << endl;
    }
};

int main() {
    Centimeter cmObj(150);
    cmObj.display();

    // Convert Centimeter to Meter using the conversion operator
    Meter mObj = cmObj;
    mObj.display();

    return 0;
}
