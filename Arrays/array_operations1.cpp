#include <iostream>
using namespace std;

// SEARCH

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

// INSERTION
// a={1,3,4,5,_}
// n= no of elements
// cap = size of array
int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
    {
        return n;
    }
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return (n + 1);
}

int main()
{
    int arr[] = {2, 5, 7, 9};
    int a;
    a = search(arr, 4, 5);
    cout << a;
    return 0;
}