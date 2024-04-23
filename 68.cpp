class Solution {
  public:
    int firstElement(int n) {
        // code here
        vector<int> temp;
        temp.push_back(1);
        temp.push_back(1);
        for(int i=2;i<n;i++){
            temp.push_back((temp[i-1]+temp[i-2])%1000000007);
        }
        return temp[n-1];
    }
};