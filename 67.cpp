class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int min =INT_MAX;
        int row = -1;
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<m;j++){
                if(a[i][j] == 1) count++;
            }
            if(count<min) {
                min = count;
                row = i;
            }    
        }
        return row+1;
    }
};