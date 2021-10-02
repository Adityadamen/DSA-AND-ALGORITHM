/*

Given two binary max heaps as arrays, merge the given heaps to form a new max heap.

LInk- https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1

*/

class Solution{
    public:
    void heapify(vector<int>&a,int n,int i)
    {
        int largest=i;
        int left=2*i +1;
        int right=2*i+2;
        if(left<n && a[left]>a[largest])
        largest=left;
        if(right<n && a[right]>a[largest])
        largest=right;
        if(largest!=i)
        {
            swap(a[i],a[largest]);
            heapify(a,n,largest);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        for(int i=0;i<m;i++)
        a.push_back(b[i]);
        n=n+m;
        for(int i=n/2-1;i>=0;i--)
        {
            heapify(a,n,i);
        }
        return a;
    }
};
