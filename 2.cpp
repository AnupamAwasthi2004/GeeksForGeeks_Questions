pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long>res;
    long min=INT_MAX;
    long max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min =a[i];
    }
    return { min, max};
}