#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,i;
    cin>>n;
    int a[n];
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    int maxsum = INT_MIN;
    int currsum = 0;
    
    for(i=0;i<n;i++){
        currsum = currsum + a[i];
        
        if(currsum > maxsum){
            maxsum = currsum;
        }    
        
        if(currsum < 0){
            currsum = 0;
        }
    }
    cout <<"Maximum contiguous sum is "<< maxsum << endl;

	return 0;

}