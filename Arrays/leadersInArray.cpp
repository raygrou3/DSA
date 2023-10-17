// // #include <bits/stdc++.h>
// // using namespace std;

// // TODO: NAIVE SOLUTION O(N ^ 2)
// //  int leader(int arr[], int n)
// //  {
// //      for (int i = 0; i < n; i++)
// //      {
// //          bool flag = false;
// //          for (int j = i + 1; j < n; j++)
// //          {
// //              if (arr[i] <= arr[j])
// //              {
// //                  flag = true;
// //                  break;
// //              }
// //          }
// //          if (flag == false)
// //          {
// //              cout << arr[i] << " ";
// //          }
// //      }
// //  }
// //  int main()
// //  {
// //      int arr[] = {7, 10, 4, 6, 5, 2};
// //      int n = 6;
// //      leader(arr, n);
// //  }

// // TODO: BETTER SOLUTION
// // we traverse from the right side as right side elements are leaders
// #include <bits/stdc++.h>
// using namespace std;

// int leader(int arr[], int n)
// {
//     int cur_leader = arr[n - 1];
//     cout << cur_leader << " ";
//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (arr[i] > cur_leader)
//         {
//             cur_leader = arr[i];
//             cout << cur_leader << " ";
//         }
//     }
// }

// int main()
// {
//     int arr[] = {7, 10, 4, 6, 5, 2};
//     int n = 6;
//     leader(arr, n);
// }

// TODO: vector try (check)

#include <bits/stdc++.h>
using namespace std;

vector<int> leader(int a[], int n)
{
    vector<int> abc;
    int cur_leader = a[n - 1];
    abc.push_back(cur_leader);

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > cur_leader)
        {
            cur_leader = a[i];
            abc.push_back(cur_leader);
        }
    }

    vector<int>::iterator ptr;
    for (ptr = abc.end() - 1; ptr >= abc.begin(); ptr--)
    {
        cout << *ptr << " ";
    }
}

int main()
{
    int arr[] = {7, 10, 4, 6, 5, 2};
    int n = 6;
    leader(arr, n);
}