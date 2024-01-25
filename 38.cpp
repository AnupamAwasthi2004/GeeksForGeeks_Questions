int convertFive(int n) {
    // Your code here
    int y;
    int q=0;
    while(n!=0){
        int j=n%10;
        if(j==0) j=5;
        y=y+(pow(10,q)*j);
        q++;
        n=n/10;
    }
    return y;
}