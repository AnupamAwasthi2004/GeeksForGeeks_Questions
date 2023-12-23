// Time  Complexity O(n)+O(n)=O(n)
// Space Complexity O(n)
public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int p=n/k;
        int q=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[arr[i]]>p){
                q++;
                mp[arr[i]]=0;
            }
        }
        return q;
    }
};