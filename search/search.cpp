#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << i;
            break;
        }
        else
        {
            // cout << "not found";
        }
    }
}

int main()
{
    int arr[] = {3, 5, 7, 8};
    int n = 4;
    search(arr, n, 5);
}