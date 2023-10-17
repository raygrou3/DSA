// // #include <bits/stdc++.h>
// // using namespace std;

// // int second(int arr[], int n)
// // {
// //     int l = 0;
// //     int s = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (arr[i] > l)
// //         {
// //             l = arr[i];
// //         }
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         if ((arr[i] > s) && (arr[i] < l))
// //         {
// //             s = arr[i];
// //         }
// //     }
// //     cout << l << endl;
// //     cout << s;
// // }

// // int main()
// // {
// //     int a[] = {10, 5, 8, 20};
// //     second(a, 4);
// // }

// // TODO:This is done using 2 traversals

// // #include <bits/stdc++.h>
// // using namespace std;
// // //[2,5,3,1]
// // int second(int arr[], int n)
// // {
// //     int l = 0;
// //     int s = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (arr[i] > l)
// //         {
// //             l = arr[i];
// //         }
// //     }
// //     cout << l << endl;
// //     for (int j = 0; j < n; j++)
// //     {
// //         if (arr[j] > s && arr[j] < l)
// //         {
// //             s = arr[j];
// //         }
// //     }
// //     cout << s;
// // }
// // int main()
// // {
// //     int arr[] = {2, 5, 3, 1, 23};
// //     int n = 5;
// //     second(arr, n);
// // }

// // TODO: Using single traversal

// #include <bits/stdc++.h>
// using namespace std;

// int second(int arr[], int n)
// {
//     int res = -1, largest = 0;

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > arr[largest])
//         {
//             res = largest;
//             largest = i;
//         }
//         else if (arr[i] != arr[largest])
//         {
//             if (res == -1 || arr[i] > arr[res])
//             {
//                 res = i;
//             }
//         }
//     }
//     cout << arr[res];
// }

// int main()
// {
//     int arr[] = {5, 7, 4, 8, 2};
//     int n = 5;
//     second(arr, 5);
// }

#include <bits/stdc++.h>
using namespace std;

int second(int arr[], int n)
{
    int res = -1, largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    cout << arr[res];
}

int main()
{
    int arr[] = {2, 5, 25, 35, 69};
    int n = 50;
    second(arr, n);
}