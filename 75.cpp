class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        map<int,int> mp;
        for(int i = 0; i < a.size(); i++){
            mp[a[i]]++;
        }
        for(int i = 0; i < b.size(); i++){
            if(mp[b[i]] == 0) return false;
            else{
                mp[b[i]]--;
            }
        }
        return true;
    }

};