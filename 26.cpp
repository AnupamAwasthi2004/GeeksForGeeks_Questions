int * Rearrange(int *arr,int n){
    // Complete the function
    map<int,int> mp;
    vector<int>res;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
       if(mp[i]>0)
       arr[i]=i;
       else
       arr[i]=-1;
    }
    return arr;

}