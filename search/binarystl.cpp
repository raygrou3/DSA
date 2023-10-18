// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> vec = {10, 15, 20, 25, 30, 35};

//     if (binary_search(vec.begin(), vec.end(), 19))
//     {
//         cout << "exists";
//     }
//     else
//     {
//         cout << "does not exist";
//     }
//     cout << endl;

//     int arr[] = {10, 15, 20, 25, 30, 35};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     if (binary_search(arr, arr + n, 15))
//     {
//         cout << "exists";
//     }
//     else
//     {
//         cout << "does not exists";
//     }
// }

#include <iostream>
using namespace std;

int mindiff(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] <= arr[j] && j - i > c)
            {
                c = j - i;
            }
        }
    }
    return c;
}

int main()
{
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = 9;
    cout << mindiff(arr, n);
}