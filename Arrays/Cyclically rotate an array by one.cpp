#include <iostream>
using namespace std;

int main() {

    int n,i;
    cin>>n;
    int a[n];
    int b[n];
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    b[0] = a[n-1];
    
    for(i=0;i<n;i++){
        b[i+1] = a[i];
    }
    
    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

	return 0;

}