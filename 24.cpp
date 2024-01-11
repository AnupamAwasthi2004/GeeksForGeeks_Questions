class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int i=0;
       int j=n-1;
       int s1=0;
       int s2=0;
       while(i<j){
           s1=s1+a[i];
           s2=s2+a[j];
           i++;
           j--;
       }
       return abs(s1-s2);
    }
};