class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        for(int i=0;i<n-1;i++){
        if(a[i]==b[i]) continue;
        return i;
        }
        return n-1;
    }
};