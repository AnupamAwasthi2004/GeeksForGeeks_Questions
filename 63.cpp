class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> sq;
        for(int i=0; i<x.size(); i++){
            if(x[i]=='{' || x[i]=='(' || x[i]=='[')  sq.push(x[i]);
            else{
                if(sq.size()==0) return false;
                char k = sq.top();
                if((x[i] == '}' && k=='{')  || (x[i] == ']' && k=='[')  || (x[i] == ')' && k=='(') ){
                     sq.pop();
                     continue;
                }
                else return false;
            }
        }
        if(sq.size()!=0) return false;
        return true;
    }

};