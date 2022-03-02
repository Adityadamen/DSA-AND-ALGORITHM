#include<iostream>
using namespace std;
int main()
{
  int a[100],i,n;
  
 cout<<"Enter the size of array\n";
  cin>>n;
 
  cout<<"Enter the element\n";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }

  for(i=0;i<n;i++)
 {
  int k=0,rem=0,sum=0;
    k=a[i];
    while(k!=0)
    {
      rem=k%10;
      sum=sum+rem*rem*rem;
      k=k/10;
    }
    if(sum==a[i])
     cout<<a[i]<<"\t Is ArmStrong\n";
    else
     cout<<a[i]<<"\t Is Not ArmStrong\n";
     
  }

 return 0;
}
