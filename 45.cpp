class Solution{
public:
    vector<int> pattern(int N){
        // code here
        vector<int> res;
        int p=N;
        res.push_back(p);
        while(p>0){
            p=p-5;
            res.push_back(p);
        }
        while(p<N){
            p=p+5;
            res.push_back(p);
        }
        return res;
    }
};