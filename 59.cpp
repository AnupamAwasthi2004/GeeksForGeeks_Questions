class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        for(int i=0;i<n-1;i++){
            int check = 0;
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    check++;
                    break;
                }
            }
            if(check==0) ans.push_back(a[i]);
        }
        ans.push_back(a[n-1]);
        return ans;
        
    }
};