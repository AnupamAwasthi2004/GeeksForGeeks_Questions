class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        // Code here
        vector<int> result;
        int i = 0;
        int j = 0;
        int dir = 0; 
        int pre_i = 0;
        int pre_j = 0;
        while(true){
            if(i==-1 || i==n || j==-1 || j==m ) break;
            if(matrix[i][j] == 0){
                pre_i = i;
                pre_j = j;
                if(dir == 0) j++;
                else if(dir == 1) i++;
                else if(dir == 2) j--;
                else i--;
            }
            else{
                pre_i = i;
                pre_j = j;
                matrix[i][j] = 0;
                if(dir == 0){
                    i++;
                    dir=1;
                }
                else if(dir == 1){
                    j--;
                    dir=2;
                }
                else if(dir == 2){
                    i--;
                    dir = 3;
                }
                else{
                    j++;
                    dir =0;
                }
            }
        }
        result.push_back(pre_i);
        result.push_back(pre_j);
        return result;
    }
};