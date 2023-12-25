// Time  Complexity O(n)+O(n)=O(n)
// Space Complexity O(1)
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]>max) max=arr[i];
	    }
	    int max2=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]>max2 && arr[i]<max) max2=arr[i];
	    }
	    if(max2==INT_MIN) return -1;
	    return max2;
	}
};