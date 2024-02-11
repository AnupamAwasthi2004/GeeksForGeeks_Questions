class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int i=0;
        while(i<n){
            if( arr[i]==1) return i;
            else i++;
        }
        return -1;
    }
};