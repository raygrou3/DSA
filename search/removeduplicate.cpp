#include <bits/stdc++.h>
using namespace std;

// int duplicate(int arr[], int n)
// {
//     int temp[n];
//     temp[0] = arr[0];
//     int res = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (temp[res - 1] != arr[i])
//         {
//             temp[res] = arr[i];
//             res++;
//         }
//     }
//     for (int i = 0; i < res; i++)
//     {
//         arr[i] = temp[i];
//     }
//     return res;
// }

int duplicate(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10, 10, 10, 10, 10, 10};
    int n = 6;
    cout << duplicate(arr, n);
}