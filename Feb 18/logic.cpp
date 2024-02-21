#include <iostream>
using namespace std;
int main()
{
    /*
    int n;
    int fact = 1;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        fact = fact * i;
        i = i + 1;
    }
    cout << fact << endl;*/

    /*
        char ch = ' ';
        ch = ch + 2;
        cout << ch << endl;
        cin >> ch;
        if (ch >= 'A' && ch <= 'Z')
        {
            cout << "capital" << endl;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            cout << "lower" << endl;
        }
        else if (ch >= '0' && ch <= '9')
        {
            cout << "number" << endl;
        }
        else
        {
            cout << "Character" << endl;
        }
        */

    /*
 int a, b, c;
 cout << "Enter a b c:";
 cin >> a >> b >> c;
 if (a == b || a == c || b == c)
 {
     cout << "kuch number same hay" << endl;
 }
 else if (a >= b && a >= c)
 {
     cout << "a is greater" << endl;
 }
 else if (b > c)
 {
     cout << "b is greater" << endl;
 }
 else
 {
     cout << "C is greater" << endl;
 }
 cout << "a :" << a << endl;
 cout << "b :" << b << endl;
 cout << "c :" << c << endl;
 */

    // int i = 1;
    // int n;
    // cout << "Enter number:";
    // cin >> n;
    // int countofzero = 0;
    // while (i <= n)
    // {
    //     if (n % i == 0)
    //     {
    //         countofzero = countofzero + 1;
    //     }
    //     i = i + 1;
    // }

    // for (int i = 1; i <= n; i = i + 1)
    // {
    //     if (n % i == 0)
    //     {
    //         countofzero = countofzero + 1;
    //     }
    // }
    // if (countofzero == 2)
    // {
    //     cout << "prime number" << endl;
    // }
    // else
    // {
    //     cout << "Not a prime" << endl;

    char ch = '-';
    int a = 1, b = 4;
    switch (ch)
    {
    case '+':
        cout << a + b << endl;
        break;
    case 2:
        cout << "kaustubh" << endl;
        break;
    default:
        cout << "Default" << endl;
        break;
    }

    return 0;
}