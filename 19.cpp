class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
     int c=0;
     for(int i=0;i<n;i++){
         if(arr[i]==0) c++;
     }
     return c;
    }
};