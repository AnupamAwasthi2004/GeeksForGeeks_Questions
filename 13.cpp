class Solution{
    public:
    int leftElement(int a[], int n) {
        // Your code goes here   
        sort(a,a+n);
        if(n%2==0) return a[n/2-1];
        return a[n/2];
        return {};
    }
};