class Solution{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int h[], int n) {
	    // code here
	    int max = h[0];
	    int result = 1;
	    for(int i=1;i<n;i++){
	        if(h[i]>max){
	            result++;
	            max=h[i];
	        }
	    }
	    return result;
	}
};