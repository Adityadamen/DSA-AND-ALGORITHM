#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main()
{
    int n, k;
    cout << "enter size of array: " << endl;
    cin >> n;
    cout << "enter the elements of array: " << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    cout << "Array after sorting in increasing order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Enter the Kth number: " << endl;
    cin >> k;
    int f = k - 1;
    cout << "The Kth minimum number is: " << a[f] << endl;
    cout << "The Kth maximum number is: " << a[n - k] << endl;

    return 0;
}