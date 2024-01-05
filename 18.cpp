class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    vector<int>res;
	    int p=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0) p++;
	        else res.push_back(arr[i]);
	    }
	    for(int i=0;i<n-p;i++) arr[i]=res[i];
	    for(int i=n-p;i<n;i++)  arr[i]=0;
	    
	}
};