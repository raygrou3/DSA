#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};
    vector<int>::iterator low;

    low = lower_bound(v.begin(), v.end(), 20);
    cout << (low - v.begin() - 1);
}