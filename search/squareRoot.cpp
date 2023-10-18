// TODO:             NOTE: CONDITION ZERO IS NOT TAKEN IN SOLVING THE FOLLOWING ALGOs

// #include <bits/stdc++.h>
// using namespace std;

// TODO: A solution

// int sqrt(int x)
// {
//     int i = 1;
//     int c = 0;
//     while (x > 0)
//     {
//         x = x - i;
//         if (x < 0)
//         {
//             return c;
//         }
//         c += 1;
//         i += 2;
//     }
//     return c;
// }
// int main()
// {
//     cout << sqrt(26);
// }

// TODO: Another soln

// #include <bits/stdc++.h>
// using namespace std;

// int sqrt(int x)
// {
//     int i = 1;
//     while ((i * i) <= x)
//     {
//         i++;
//     }
//     return (i - 1);
// }

// int main()
// {
//     cout << sqrt(15);
// }

// TODO: BETTER SOLUTION using binary search (check for below condition)

#include <bits/stdc++.h>
using namespace std;

int squrt(int x)
{
    int low = 1;
    int high = x;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            high = mid - 1;
        }
        else if (mid * mid < x)
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    cout << squrt(9883934);
}
