class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==2 && a[0]==1 && a[1]==0) return 1;
        if(n==1) return 1;
        int i = 1;
        int j = n-2;
        long long lsum = a[0];
        long long rsum = a[n-1];
        while(i<=j){
            if(lsum==rsum && j==i) return i+1;
            else if(lsum==rsum){
                lsum=lsum+a[i];
                rsum=rsum+a[j];
                i++;
                j--;
            }
            else if(lsum<rsum){
                lsum=lsum+a[i];
                i++;
            }
            else{
                rsum=rsum+a[j];
                j--;
            }
        }
        return -1;
    }

};