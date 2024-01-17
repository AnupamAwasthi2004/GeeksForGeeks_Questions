class Solution {
public:
    int solve(int n, int k, vector<int> &stalls) {
        // Write your code here
        sort(stalls.begin() , stalls.end());
        int min=1;
        int max=stalls[n-1]-stalls[0];
        int ans = 0;
        while(min<=max){
            int mid=(min+max)/2;
            int p=cows(stalls,mid,k,n);
            if(p==1) {
                ans=mid;
                min=mid+1;
            }
            else max=mid-1;
        }
        return ans;
    }
private:
    int cows(vector<int>stalls, int mid, int k, int n){
        int count=1;
        int check=stalls[0];
        for(int i=0;i<n;i++){
            if(count>=k) return  1;
            if(stalls[i]-check>=mid){
                check=stalls[i];
                count++;
            }
        }
        if(count>=k) return 1;
        return -1;
    }
};