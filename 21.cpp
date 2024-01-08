class Solution{
    public:
    int minEnergy(int a[], int n)
    {
        // Your code goes here
        for(int i=1;i<n;i++) a[i]=a[i]+a[i-1];
        sort(a,a+n);
        if(a[0]>0) return 1;
        else return -a[0]+1;
    }
};