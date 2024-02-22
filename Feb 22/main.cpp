#include <iostream>
using namespace std;

// datatype func_name(input paramet/argument){
/*code*/
// }
string IsEven(int n)
{
    if ((n & 1) == 1)
    {
        return "odd";
    }
    else
    {
        return "Even";
    }
}
int main()
{
    // int a = 5, b = 1;
    // cout << "a&b " << (a & b) << endl;
    // cout << "a|b " << (a | b) << endl;
    // cout << "a^b " << (a ^ b) << endl;
    // cout << "~a " << (~a) << endl;
    // // cout << "~a " << (~a) << endl;

    int n;
    cout << "Enter n:";
    cin >> n;
    string variable = IsEven(n);
    cout << variable << endl;
    return 0;
}