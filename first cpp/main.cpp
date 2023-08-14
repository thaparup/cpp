#include <iostream>

using namespace std;

int main()
{
    string name;
	int age;
    cout<< "What is your name and age? "<< endl;
	getline(cin, name);
	cin >> age;
	cout<< "The name is " <<name << "and my age is "<<" "<<age<<endl;
    return 0;
}
