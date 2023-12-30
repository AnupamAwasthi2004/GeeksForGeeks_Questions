class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int> res;
        int y=INT_MIN;
        for( int i=0; i<k; i++){
        if(arr[i]>y) y=arr[i];
    }
    res.push_back(y);
            for(int i=1;i<=n-k;i++){
                if(arr[i-1] !=y  && arr[i+k-1]<=y){
                res.push_back(y);   
                continue;
                }
                else if(arr[i-1] ==y  && arr[i+k-1]>=y){
                    y=arr[i+k-1];
                res.push_back(y);   
                continue;
                }
                else{
                y=INT_MIN;
            for(int j=i;j<i+k;j++){
                if(arr[j]>y)
                y=arr[j];
            }
                res.push_back(y);
            }
            }
        return res;
    }
};