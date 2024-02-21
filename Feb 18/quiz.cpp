#include <iostream>
using namespace std;
bool BinarySearch(int *arr, int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    while (e >= s)
    {
        if (arr[mid] == key)
        {
            return true;
        }
        else if (arr[mid] < key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    bool found = BinarySearch(arr, size, key);
    if (found)
    {
        cout << "Key is present!" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }
    return 0;
}