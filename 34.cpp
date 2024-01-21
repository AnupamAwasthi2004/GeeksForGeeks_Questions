class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int sum=N;
        int count=0;
        while(sum!=0){
            int p=sum%10;
            if(p==0) {
                sum=sum/10;
                continue;
            }
            if(N%p==0) count++;
            sum=sum/10;
        }
        return count;
    }
};