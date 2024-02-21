/*
    to check if number is positive neagtive or zero

*/

#include <iostream>
using namespace std;
int main()
{
    int num = 14;
    if (num > 0)
    {
        cout << "positive" << endl;
    }
    else if (num < 0)
    {
        cout << "negative" << endl;
    }
    else
    {
        cout << "zero" << endl;
    }
    return 0;
}