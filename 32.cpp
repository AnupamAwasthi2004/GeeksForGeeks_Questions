pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int floor=-1;
    int ceil=-1;
    int c_dif=INT_MAX;
    int f_dif=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>x && (arr[i]-x)<c_dif){
             ceil=arr[i];
             c_dif=arr[i]-x;
        }
        else if(arr[i]<x && (x-arr[i])<f_dif){
        floor=arr[i];
             f_dif=x-arr[i];
        }
        else if(arr[i]==x) return {x,x};
    }
        return {floor,ceil};
    }