long long int longestSubarry(long long int A[], long long int N) {
    long long count=0;
    long long p=0;
    for(long long int i=0; i<N; i++){
        if(A[i]<0){
            if(p>=count){ 
            count=p;
            }
            p=0;
        }
        else p++;
    }
    if(p>count) return p;
    return count;
}