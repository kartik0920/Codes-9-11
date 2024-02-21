#include <iostream>
using namespace std;
int main()
{
    // n
    // uss tk sum
    // 3   1+2+3==6

    int n;
    cout << "Enter n";
    cin >> n;

    int i = 0, ans = 0;
    while (i <= n)
    {
        ans = ans + i;
        i = i + 1;
    }
    // sum of 100 is $ans
    cout << ans << endl;

    return 0;
}