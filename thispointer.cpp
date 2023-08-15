#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    void printValue() {
        cout << this->value << endl;
    }

    void setValue(int v) {
        this->value = v;
    }

    MyClass* getPointer() {
        return this;
    }
};

int main() {
    MyClass obj(2);

    obj.setValue(44);
    obj.printValue();

    MyClass* ptr = obj.getPointer();
    ptr->printValue();

    return 0;
}
