class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int s1=0;
        for(int i=0;i<array.size();i++){
            s1=s1+array[i];
        }
        int s2=0;
        int p=0;
        if(n%2!=0){
        p=(n/2)+1;
        s2=p*n;
        }
        else{ 
        p=n/2;
        s2=p*(n+1);
        }
         return s2-s1;
    }
};