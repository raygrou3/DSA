// TODO:NAIVE SOLN
//  #include <bits/stdc++.h>
//  using namespace std;

// int rotate(int arr[], int n, int d)
// {
//     while (d > 0)
//     {
//         int temp = arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             arr[i - 1] = arr[i];
//         }
//         arr[n - 1] = temp;
//         d--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int d = 2;
//     rotate(arr, n, d);
// }

// TODO: USING ANOTHER ARRAY
// #include <bits/stdc++.h>
// using namespace std;

// int rotate(int arr[], int n, int d)
// {
//     int temp[d];
//     for (int i = 0; i < d; i++)
//     {
//         temp[i] = arr[i];
//     }
//     for (int i = d; i < n; i++)
//     {
//         arr[i - d] = arr[i];
//     }
//     for (int i = 0; i < d; i++)
//     {
//         arr[n - d + i] = temp[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[] = {
//         2,
//         62,
//         31,
//         79,
//         6,
//         21,
//         37,
//         45,
//         27,
//         23,
//         66,
//     };
//     int n = 11;
//     int d = 6;
//     rotate(arr, n, d);
// }

#include <bits/stdc++.h>
using namespace std;

void reverse1(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void rotate(int arr[], int n, int d)
{
    reverse1(arr, 0, d - 1);
    reverse1(arr, d, n - 1);
    reverse1(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;
    rotate(arr, n, d);
}
