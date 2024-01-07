class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
         sort(arr,arr+n);
         int i=0;
         int j=n-1;
         int p=0;
         while(i<j){
             if(arr[i]+arr[j]==sum) {
                p++;
                i++;
                j--;
             }
             else if(arr[i]+arr[j]>sum) j--;
             else i++;
         }
         if(p==0) return -1;
         return p;
        
    }
};