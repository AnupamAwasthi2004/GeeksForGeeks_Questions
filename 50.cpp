class Solution{
public:
	int getSingle(int arr[], int n) {
	    // code here
	    map<int,int>mp;
	    for(int i=0;i<n;i++) mp[arr[i]]++;
	    for(int i=0;i<n;i++) if(mp[arr[i]]%2!=0) return arr[i];
	    return {};
	   }
};