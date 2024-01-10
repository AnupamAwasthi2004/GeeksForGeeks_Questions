class Solution{
    public:
    int lastIndex(string s) 
    {
        int n=s.size()-1;
        while(n>=0){
        if(s[n]=='1') return n;
        n--;
        }
        return -1;
    }

};