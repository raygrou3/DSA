// #include <bits/stdc++.h>
// using namespace std;

// TODO: NAIVE SOLUTION

// int counter(int arr[], int n, int x)
// {
//     //[1,1,1,2,2,3]
//     int c = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             c++;
//         }
//     }
//     return c;
// }

// int main()
// {
//     int arr[] = {1, 1, 1, 2, 2, 3};
//     int n = 6;
//     cout << counter(arr, n, 1);
// }

// TODO: BETTER SOLUTION

#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
}

int lastocc(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
}

int countocc(int arr[], int n, int x)
{
    int first = firstocc(arr, n, x);
    if (first == -1)
    {
        return 0;
    }
    else
    {
        return (lastocc(arr, n, x) - first + 1);
    }
}

int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 3};
    int n = 6;
    cout << countocc(arr, n, 3);
}