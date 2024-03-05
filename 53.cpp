class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<min) min=arr[i];
        }
        return min;
    }