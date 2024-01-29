class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> result;
        result.push_back(1);
        if(n==1) return result;
        result.push_back(1);
        for(int i=2;i<n;i++) result.push_back(result[i-1]+result[i-2]);
        return result;
    }
};