class Solution
{
public:
int ways(int x, int y)
    {
        x=x+1;
        y=y+1;
        vector<vector<int>> temp(x,vector<int>(y,0));
      for(int i=0;i<x;i++){
          for(int j=0;j<y;j++){
              if(i==0|| j==0) temp[i][j]=1;
              else{
                  temp[i][j] =  (temp[i-1][j]+temp[i][j-1])%1000000007;
              }
          }
      }
      int k = temp[x-1][y-1];
      return k;
    }
};