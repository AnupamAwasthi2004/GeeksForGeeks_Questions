class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    sort(arr,arr + n);
	    int count=0;
	    for(int i=0;i<n-2;i++){
	        for(int j=i+1;j<n-1;j++){
	            count=count+finding(arr, n, arr[i]+arr[j], j);
	        }
	    }
	    return count;
	}
private:
    int finding(int arr[], int n, int sum, int start){
        // for(int i=start; i<n; i++) if(sum==arr[i]) return 1;
        // return 0;
        int i= start;
        int j=n-1;
        while(i<j){
            int mid=(i+j)/2;
             if(arr[i]==sum) return 1; 
             if(arr[j]==sum) return 1;
            if(arr[mid]==sum) return 1;
            else if(arr[mid]>sum) j=mid-1;
            else i=mid+1;
        }
        return 0;
    }
};