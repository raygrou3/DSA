// #include <bits/stdc++.h>
// using namespace std;

// int rotate(int arr[], int n)
// {
//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int n = 8;
//     rotate(arr, n);
// }

#include <bits/stdc++.h>
using namespace std;

int rotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    rotate(arr, n);
}