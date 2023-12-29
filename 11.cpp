class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        vector<int> res;
        for(int i=0;i<n;i++){
		int r=arr[i]%n;
		arr[r]=arr[r]+n;
	}
	for(int i=0;i<n;i++){
	    if((arr[i]/n)>1)
	    res.push_back(i);
	}
	if(res.size()==0) res.push_back(-1);
        return res;
    }
};