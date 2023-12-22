// Time  Complexity O(n)  
// Space Complexity O(n)
class Solution {
  public:
    int nthFibonacci(int n){
        vector<int>r;
        r.push_back(1);
        r.push_back(1);
        for(int i=2;i<n;i++)
        r.push_back((r[i-1]+r[i-2])%1000000007);
        return r[n-1];
    }
};