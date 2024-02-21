#include <iostream>
using namespace std;

int square(int x)
{
    int y = x * x;
    return y;
}

int factorial(int x)
{
    int y = 1;
    for (int i = 1; i <= x; i++)
    {
        y = y * i;
    }
    return y;
}

bool Isprime(int x)
{
    int countofzero = 0;
    for (int i = 1; i <= x; i += 1)
    {
        if (x % i == 0)
        {
            countofzero += 1;
        }
    }
    if (countofzero == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEven(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sumofn(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    // int y = factorial(3);
    // cout << y << endl;
    // pow(2,3)=2*2*2=8
    // pow(3,2)=3*3=9
    // int n = sumofn(10);
    // cout << n << endl;
    int asd = power(10, 2);
    cout << asd << endl;
    return 0;
}