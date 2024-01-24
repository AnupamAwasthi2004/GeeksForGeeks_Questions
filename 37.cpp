class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    sort(arr,arr+n);
	    vector<int> res;
	    int j=1;
	   while(j<=k)
	   {
	       res.push_back(arr[n-j]);
	       j++;
	   }
	   return res;
	}

};