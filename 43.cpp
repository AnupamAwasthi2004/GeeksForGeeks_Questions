class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    for(int i=1;i<n;i++){
	        if(arr[i]<arr[i-1]) return arr[i-1];
	    }
	    return arr[n-1];
	}
};