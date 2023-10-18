#include <bits/stdc++.h>
using namespace std;

int lastocc(int arr[], int low, int high, int x)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] > x)
    {
        return lastocc(arr, low, mid - 1, x);
    }
    else if (arr[mid] < x)
    {
        return lastocc(arr, mid + 1, high, x);
    }
    else
    {
        if (mid == 0 || arr[mid] != arr[mid + 1]) // try for mid=n-1
        {
            return mid;
        }
        else
        {
            return lastocc(arr, mid + 1, high, x);
        }
    }
}

int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 4};
    int n = 9;
    cout << lastocc(arr, 0, n - 1, 3);
    // 2 10 7 4 6
}