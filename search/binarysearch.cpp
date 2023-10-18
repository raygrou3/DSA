// #include <bits/stdc++.h>
// using namespace std;

// int binary(int arr[], int n, int x)
// {
//     int low = 0, high = n;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == x)
//         {
//             // cout << mid;
//             //  flag = 1;

//             return mid;
//         }
//         else if (arr[mid] > x)
//         {
//             high = mid - 1;
//         }
//         else if (arr[mid] < x)
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int arr[] = {40, 42, 43, 44, 49};
//     int n = 5;
//     cout << lower_bound(arr, arr + n, 41) << endl;
//     cout << binary(arr, 5, 48);
// }

// TODO:Recursive

#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int x, int low, int high)
{

    if (low <= high)
    {
        int mid = (low + (high)) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            return binary(arr, x, mid + 1, high);
        }
        else
        {
            return binary(arr, x, low, mid - 1);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << binary(arr, 1, 0, n);
}