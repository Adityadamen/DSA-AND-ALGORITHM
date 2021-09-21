#include <bits/stdc++.h>
using namespace std;

int main()
{
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

    cout << "intersection of both the arrays is: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr2[j] << " ";
            }
        }
    }

    return 0;
}