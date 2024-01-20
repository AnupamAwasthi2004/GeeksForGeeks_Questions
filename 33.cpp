class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   vector<int>p;
	    int y=k%n;
	   for(int i=0;i<y;i++){
	        p.push_back(arr[i]);
	   }
	   int q=0;
	       for(int j=y;j<n;j++) arr[j-y]=arr[j];
	       for(int j=n-y;j<n;j++){
	            arr[j]=p[q];
	            q++;
	       }
	} 
		 

};