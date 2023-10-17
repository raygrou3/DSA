#include <iostream>
using namespace std;

int sortcheck(int arr[], int n)
{
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << " sorted";
    }
    else
    {
        cout << "not sorted";
    }
}

int main()
{
    int arr[] = {2, 5, 6, 54};
    int n = 4;
    sortcheck(arr, n);
}