#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > c)
        {
            c = arr[i];
        }
    }
    cout << c;
}

int main()
{
    int a[] = {40, 8, 50, 100};
    cout << sizeof(a) / sizeof(a[0]);
    largest(a, 4);
}