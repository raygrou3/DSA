// #include <bits/stdc++.h>
// using namespace std;

// int countones(int arr[], int n)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] < 1)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             if (mid == 0 || arr[mid] != arr[mid - 1])
//             {
//                 return (n - mid);
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
//     int n = 16;
//     cout << countones(arr, n);
// }

// TODO: IF ARRAY IS SORTED IN REVERSE

#include <bits/stdc++.h>
using namespace std;

int countones(int arr[], int N)
{ // 1,1,1,0,0,0,0     7

    int low = 0;
    int high = N - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 0)
        {
            high = mid - 1;
        }
        else
        {
            if (mid == N - 1 || arr[mid + 1] == 0)
            {
                return mid + 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 1, 0, 0, 0};
    int n = 8;
    cout << countones(arr, n);
}
