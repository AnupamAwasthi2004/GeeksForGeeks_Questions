class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int number=a[0];
        int count=1;
        for(int i=1;i<size;i++){
           if(number==a[i]) count++;
           else{
               count--;
               if(count==0){ 
                  number=a[i];
                  count++;
               }
               }
        }
        int c=0;
        for(int i=0;i<size;i++){
            if(number==a[i]) c++;
        }
        if(c>(size/2)) return number;
        return -1;
    }
};