// #include <bits/stdc++.h>
// using namespace std;

// int secondLargest(int arr[], int n)
// {
//     int first = 0, second = -1;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > arr[first])
//         {
//             second = first;
//             first = i;
//         }
//         else if (arr[i] < arr[first])
//         {
//             if (second == -1 || arr[second] < arr[i])
//                 second = i;
//         }
//     }
//     cout << second;
// }

// int main()
// {
//     int arr[] = {5, 7, 4, 8, 2};
//     int n = 5;
//     secondLargest(arr, 5);
// }

#include <bits/stdc++.h>
using namespace std;

int second(int arr[], int n)
{
    int res = -1, largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] < arr[largest] || arr[i] > arr[res])
        {
            res = i;
        }
    }
    return largest;
    return res;
}

int main()
{
    int arr[] = {20, 30, 64, 32, 66};
    int n = 5;
    cout << second(arr, n);
}