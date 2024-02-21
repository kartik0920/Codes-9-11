// #include <iostream>
// using namespace std;
// int main()
// {
//     // while
//     /*
//     while(condition){
//         code
//     }

//         print 1 to n number
//         1 2 3 4 5 ...........
//     */
//     /*
//      int n;
//      cout << "Enter n:";
//      cin >> n;
//      int i = 1;
//      while (i <= n)
//      {
//          cout << i << ' ';
//          i = i + 1;
//      }
//      cout << endl;*/

//     /*
//         n ---->user input
//         sum of first n number

//         n =5
//         int ans=0
//         ans+1=1   ---->1
//         1+2=ans+2------>1+2
//         1+2+3=ans+3----->1+2+3
//         1+2+3+4=ans+4
//     */
//     // int n;
//     // cin >> n;
//     // int i = 0;
//     // int ans = 0;
//     // while (i <= n)
//     // {
//     //     ans = ans + i;
//     //     i = i + 1;
//     // }
//     // cout << ans << endl;
//     // //    cout<<i;

//     // is a number prime
//     /*
//         int n=3
//         prime it is prime
//         int n=10
//         its is not prime
//         int n=9
//         it is not prime

//     */
//     int n;
//     cout << "Enter the number:";
//     cin >> n;
//     int i = 2;
//     // bool IsPrime = true;
//     int p = 0;
//     while (i < n)
//     {
//         if (n % i == 0)
//         {
//             p = p + 1;
//         }
//         i = i + 1;
//     }
//     if (p == 0)
//     {
//         cout << "It is prime" << endl;
//     }
//     else
//     {
//         cout << "It is not prime" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    /*
    n=5
    facto=5*4*3*2*1=
    */

    int n = -1;
    int i = 1, fact = 1;
    if (n < 0)
    {
        cout << "enter valid number" << endl;
    }
    else
    {
        while (i <= n)
        {
            fact = fact * i;
            i = i + 1;
        }
        cout << fact << endl;
    }
    char a = '1';

    return 0;
}