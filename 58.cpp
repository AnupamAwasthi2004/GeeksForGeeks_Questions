class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int i = 0;
        int j = n-1;
        int f_index=-1;
        int l_index=-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(arr[mid] == x){
                if(mid == 0 || arr[mid-1]<x){
                     f_index = mid;
                     break;
                }
                else j = mid-1;
            }
            else if(arr[mid]<x) i=mid+1;
            else j=mid-1;
        }
        i=0;
        j=n-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(arr[mid] == x){
                if(mid == n-1 || arr[mid+1]>x){
                     l_index = mid;
                     break;
                }
                else i = mid+1;
            }
            else if(arr[mid]<x) i=mid+1;
            else j=mid-1;
        }
        vector<int>result;
        result.push_back(f_index);
        result.push_back(l_index);
        return result;
    }
};

