// #include <bits/stdc++.h>
// using namespace std;
// // TODO: O(n)
// //  int firstocc(int arr[], int n, int x)
// //  {
// //      for (int i = 0; i < n; i++)
// //      {
// //          if (arr[i] == x)
// //          {
// //              return i;
// //              // break;
// //          }
// //      }
// //      return -1;
// //  }

// // int main()
// // {
// //     int arr[] = {1, 10, 10, 10, 10,10, 20, 20, 40};
// //     int n = 7;
// //     cout << firstocc(arr, n, 20);
// // }

// // TODO:O(logn)

// int firstocc(int arr[], int low, int high, int x)
// {

//     if (low > high)
//     {
//         return -1;
//     }
//     int mid = (low + high) / 2;
//     if (arr[mid] > x)
//     {
//         return firstocc(arr, low, mid - 1, x);
//     }
//     else if (arr[mid] < x)
//     {
//         return firstocc(arr, mid + 1, high, x);
//     }
//     else
//     {
//         if (mid == 0 || arr[mid] != arr[mid - 1])
//         {
//             return mid;
//         }
//         else
//         {
//             firstocc(arr, low, mid - 1, x);
//         }
//     }
// }

// int main()
// {
//     int arr[] = {10, 10, 20, 20, 20, 20, 20};
//     int n = 7;
//     cout << firstocc(arr, 0, n - 1, 10);
// }

#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int low, int high, int x)
{

    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] > x)
    {
        return firstocc(arr, low, mid - 1, x);
    }
    else if (arr[mid] < x)
    {
        return firstocc(arr, mid + 1, high, x);
    }

    else
    {
        if (mid == 0 || arr[mid] != arr[mid - 1])
        {
            return mid;
        }
        else
        {
            return firstocc(arr, low, mid - 1, x);
        }
    }
}

int main()
{
    int arr[] = {1, 1, 2, 3, 3, 3};
    int n = 6;
    cout << firstocc(arr, 0, n - 1, 2);
}
