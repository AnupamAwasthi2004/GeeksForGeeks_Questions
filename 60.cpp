class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        vector<int> k;
        for(int i=0;i<32;i++) k.push_back(0);
        int i = 31;
        while(x!=0){
            k[i]=x%2;
            x=x/2;
            i--;
        }
        long long ans = 0;
        for(int i = 0; i<32; i++){
            ans=ans+k[i]*(pow(2,i));
        }
        return ans;
    }
};