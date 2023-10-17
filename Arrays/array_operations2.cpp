#include <iostream>
using namespace std;

// TODO:
// DELETION
// a={}

int deletion(int arr[], int n, int x)
{
    int idx;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == x)
        {
            idx = i;
            break;
        }
        if (i == n)
        {
            cout << "not found" << endl;
        }
    }
    for (int j = idx; j <= n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return n - 1;
}

int main()
{
    int a[] = {3, 8, 12, 5, 6};
    int b = deletion(a, 5, 12);
    for (int i = 0; i < b; i++)
    {
        cout << a[i] << " ";
    }
}