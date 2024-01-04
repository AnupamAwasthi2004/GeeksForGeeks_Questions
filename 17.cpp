class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        sort(arr,arr+N);
        if(arr[0]!=arr[1]) return arr[0];
        for(int i=1;i<N-1;i++){
            if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]) return arr[i];
        }
        return arr[N-1];
    }
};