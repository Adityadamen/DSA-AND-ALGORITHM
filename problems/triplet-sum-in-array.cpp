class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
bool find3Numbers(int a[], int n, int x)
{
   int l,r;
   sort(a,a+n);
   for(int i=0;i<n-2;i++)
   {
       l=i+1;
       r =n-1;
       while(l<r)
       {
           if(a[i]+a[l]+a[r]==x)
           {
               return 1;
           }
           else if(a[i] + a[l] + a[r]<x)
           {
               l++;
           }
           else
           {
               r--;
           }
       }
   }
   return 0;
}

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
