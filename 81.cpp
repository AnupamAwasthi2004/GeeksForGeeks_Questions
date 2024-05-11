class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        // code here
        vector<long long> ans;
        ans.push_back(n);
        if(n==1) return ans;
        while(true){
            if( (ans[ans.size()-1] % 2) == 0){
                ans.push_back(pow(ans[ans.size()-1],0.5));
                if (ans[ans.size()-1] == 1)  break;
            }
            else{
             ans.push_back(pow(ans[ans.size()-1],1.5));
                if (ans[ans.size()-1] == 1)  break;   
            }
        }
        return ans;
    }
};