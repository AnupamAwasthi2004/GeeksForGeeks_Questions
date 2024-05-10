class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A + n);
        int i = 0;
        while(i < n-2){
            int j = i+1;
            int k = n-1;
            while(j<k){
            if(A[i]+A[j]+A[k] == X) return true;
            else if(A[i]+A[j]+A[k] < X) j++;
            else k--;
            }
            i++;
        }
        return false;
    }

};