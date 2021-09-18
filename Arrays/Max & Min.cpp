#include <iostream>
using namespace std;

int main() {

    int i,n;
    cin>>n;
    int a[n];
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    int max = a[0];
    int min = a[0];
    
    for(i = 1; i < n; i = i+1)
        if(max<a[i])
            max=a[i];
            cout <<"Maximum Element is "<<max;
            
    cout<<endl;
             
    for(i = 1; i < n; i = i+1)
        if(min>a[i])
            min=a[i];
            cout <<"Minimum Element is "<<min;

}
