#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    int n, m;
    cout << "Enter the size of both the arrays: " << endl;
    cin >> n >> m;
    int arr1[n], arr2[m];
    set<int> s;

    cout << "Elements of array 1:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        s.insert(arr1[i]);
    }

    cout << "Elements of array 2:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
        s.insert(arr2[i]);
    }

    cout << "the count of union of both the array is: " << s.size() << endl;
    // }
    return 0;
}