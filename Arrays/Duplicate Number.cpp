
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int count = 0;
    
    if(n==0){
        return -1;
    }
            
    for(i=1;i<n;i++){
        if(a[i-1]==a[i])
            cout<<"The repeated number is: "<<a[i]<<" "<<endl;
            count++;
    }
    cout<<"Number of times it's repeated is: "<<count;
  
  return 0; 
} 