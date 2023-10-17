#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{

    vector<int> ar = {1, 2, 3, 4, 5};
    vector<int>::iterator ptr;
    cout << "The elements are";
    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
    {
        cout << *ptr << " ";
    }
    return 0;
}

// TODO: advance()
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     vector<int>::iterator ptr = arr.begin();
//     advance(ptr, 3);
//     cout << "after advance, ptr =" << *ptr << endl;
//     cout << "the elements are";
//     for (ptr = arr.begin(); ptr < arr.end(); ptr++)
//     {
//         cout << *ptr << " ";
//     }
//     cout << endl;
// }

// TODO:inserter()
// #include <iostream>
// #include <vector>
// #include <iterator>
// using namespace std;

// int main()
// {
//     vector<int> ar = {1, 2, 3, 4, 5};
//     vector<int> ar1 = {10, 20, 30};

//     vector<int>::iterator ptr = ar.begin();
//     advance(ptr, 3);
//     copy(ar1.begin(), ar1.end(), inserter(ar, ptr));

//     cout << "the new vector after inserting elements is";
//     for (ptr = ar.begin(); ptr < ar.end(); ptr++)
//     {
//         cout << *ptr << " ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int ar[] = {1, 2, 3, 4};
//     for (int &i : ar)
//     {
//         cout << i;
//     }
// }