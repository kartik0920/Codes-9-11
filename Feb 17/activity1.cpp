/*
    take name and age input form user and print it in console

*/

#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    cout << "Enter your name:";
    cin >> name;
    cout << "Enter your age:";
    cin >> age;
    cout << "My name is " << name << endl;
    cout << "My age is " << age << endl;

    return 0;
}