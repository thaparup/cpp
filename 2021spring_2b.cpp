#include <iostream>
using namespace std;

class Captain{
    protected: 
    string house;
    string color;
    public: 
    void getData(string a, string b){
        house = a;
        color = b;
    }
    void putData(){
        cout<<"The house of Captain is "<<house<< " and color code is "<<color<<endl;
    }

} ;

class Student: public Captain{

    private:
    int stdId;
    string stdAddress, stdName;
    public:
    void getData(string name, string address, int id){
        stdId = id;
        stdName = name;
        stdAddress = address;
    }
    void putData(){
        cout<<"The name of the student is "<<stdName<< ", address is "<<stdAddress<<" , id is "<<stdId<<endl;
    }

};

int main(){
    Student std;
    std.getData("Peter parker", "usa", 005);
    std.putData();
    std.Captain::getData("green house from student class", "23jdj23");
    std.Captain::putData();

    
    return 0;
}

