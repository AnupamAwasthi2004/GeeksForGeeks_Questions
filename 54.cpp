class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       vector<long long int> result;
       long long int t=1;
       long long int final=1;
       int count=0;
       for(int i=0;i<n;i++){ 
           t=t*nums[i];
           if(nums[i]==0) count++;
           else final= final*nums[i];
       }
       for(int i=0;i<n;i++){
           if(nums[i]==0  && count == 1) result.push_back(final);
           else if(nums[i]==0  && count > 1) result.push_back(0);
           else{
           result.push_back(t/nums[i]);
           }
       }
       return result;       
    }
};