#include <iostream>
using namespace std;

int main() {

    int n;
    int zeroCount = 0;
    int oneCount = 0;
    
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n-1;i++){
        
        if (a[i] == 0)
            zeroCount++;
        
        if (a[i] == 1)
            oneCount++;
    }
    
    for(int i=0;i<zeroCount;i++){
        a[i] = 0;
    }
    
    for(int i=zeroCount;i<(zeroCount + oneCount);i++){
        a[i] = 1;
    }
    
    for(int i=(zeroCount + oneCount);i<n;i++){
        a[i] = 2;
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
	return 0;
}