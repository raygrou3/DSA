#include <bits/stdc++.h>
using namespace std;

int reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(n - 1) - i];
        arr[(n - 1) - i] = temp;
    }
    cout << "sorted array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {30, 20, 5};
    int n = 3;
    reverse(arr, n);
}