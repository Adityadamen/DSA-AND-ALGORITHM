#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,i,k;
    cin >>k;
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
        sort(arr, arr + n);              //sort the array to get the corner cases ans.
        int smallest = arr[0] + k;       // current intial canditates
        int largest = arr[n-1] - k;      // current intial canditates
        int ans = arr[n - 1] - arr[0];   //current ans when arr[0] is min and arr[n-1] is max
        int mi,ma;                       // shortest & largest tower.
 
        for (int i = 1; i <= n - 1; i++) {
            mi = min(smallest, arr[i+1] - k);
            ma = max(largest , arr[i] + k);
            if(smallest < 0) continue;
            ans = min(ans, ma - mi);    //if the middle elements max and min diffrence if less than result then update result.
        }
        cout<<ans;

	return 0;

}