#include <iostream>
using namespace std;
int radhika(int number)
{
    int sum = 0;  //5 
    for (int i = 1; i < number; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n = 5;   //1
    int m = 7;   //2
    int k = 10;  //3
    int sum1 = radhika(n);//4  -12
    int sum2 = radhika(m);//13  -17
    int sum3 = radhika(k);

    cout << sum1 << endl;
    return 0;
}