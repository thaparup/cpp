#include <iostream>
using namespace std;

class Faculty {
    protected:
    string engineering, management, humanities;
     public :
    void getData(string a, string b, string c) {
        engineering = a;
        management = b;
        humanities = c;
    }

    void putData() {
        cout << "Engineering : " << engineering << " management " << management << " humanities " << humanities << endl;
    }
};

class Department {
    protected:
    string bba, bca, bce;
     public:
    void getData(string a, string b, string c) {
        bca = a;
        bba = b;
        bce = c;
    }

    void putData() {
        cout << "Bca " << bca << " bba " << bba << " bce " << bce << endl;
    }
};

class College : public Faculty, public Department {
    protected:
        string name, address, email;

    public:
        void getData(string n, string a, string e) {
            name = n;
            address = a;
            email = e;
        }

        void putData() {
            cout << "Name: " << name << " Email: " << email << " address " << address << endl;
        }
};

// class College : public Faculty, public Department {
//     protected:
//         string name, address, email;

//     public:
//         void getData(string n, string a, string e) {
//             name = n;
//             address = a;
//             email = e;
//             Faculty::getData("Engineering", "Management", "Humanities");
//             Department::getData("BBA", "BCA", "BCE");
//         }

//         void putData() {
//             cout << "Name: " << name << " Email: " << email << " address " << address << endl;
//             Faculty::putData();
//             Department::putData();
//         }
// };


int main() {
    College clz1;
    clz1.getData("Annapurna College", "Kathmandu", "ananauram@gmail.com");
    clz1.putData();
    clz1.Faculty::getData("sfsfd","sfsfsdfdf", "sfsdfsdf");
    clz1.Faculty::putData();

    

    return 0;
}
