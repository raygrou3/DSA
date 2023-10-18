// TODO: ALSO CALLED AS UNBOUNDED BINARY SEARCH ALGORITHM

// #include <bits/stdc++.h>
// using namespace std;

// int search(int arr[], int x)
// {
//     int i = 0;
//     while (true)
//     {
//         if (arr[i] == x)
//         {
//             return i;
//         }
//         else if (arr[i] > x)
//         {
//             return -1;
//         }
//         i++;
//     }
// }

// int main()
// {
//     int arr[] = {20, 40, 200, 300, 400, 500, 1000, 2000, 5000, 16000, 170000};
//     cout << search(arr, 400);
// }

// TODO: BETTER SOLUTION using log(position) time
// we traverse using indexes 1, 2, 4, 8, 16.......

#include <bits/stdc++.h>
using namespace std;
// 1 10 15 20 40 60 80 100 200 500 1000.....

int binary(int arr[], int x, int low, int high)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
    {
        return binary(arr, x, low, mid - 1);
    }
    else
    {
        return binary(arr, x, mid + 1, high);
    }
}

int search(int arr[], int x)
{
    if (arr[0] == x)
    {
        return 0;
    }
    int i = 1;
    while (arr[i] < x)
    {
        i = i * 2;
    }
    if (arr[i] == x)
    {
        return i;
    }
    binary(arr, x, (i / 2) + 1, i - 1);
}

int main()
{
    int arr[] = {1, 10, 15, 20, 40, 60, 80, 100, 200, 500, 1000};
    cout << search(arr, 15);
}