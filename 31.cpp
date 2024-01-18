class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
	    // code here
	    long long res;
	    if(n%2==0){
	        res=n/2;
	        res=res*(n+1);
	    }
	    else{
	       res=(n+1)/2;
	    res=res*n;
	    }
	    return res;
	}
};