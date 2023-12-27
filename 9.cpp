bool findPair(int arr[], int size, int n){
    //code
    int count=0;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++)
        if(arr[i]-arr[j]==n || arr[j]-arr[i]==n) return true;
    }
    return false;
}