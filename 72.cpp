class Solution {
  public:
    int sumOfNaturals(int n) {
        // code here
        int m=1e9+7;
        return ((n*1LL*(n+1))/2)%m;
        }
}