class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
       vector<int>arr;
       int i=0;
       int j=0;
       while(i<array1.size() && j<array2.size()){
           if(array1[i]<array2[j]) {
               arr.push_back(array1[i]);
               i++;
       }
           else{
               arr.push_back(array2[j]);
               j++;
           }
       }
       while(i<array1.size()){
           arr.push_back(array1[i]);
           i++;
       }
        while(j<array2.size()){
           arr.push_back(array2[j]);
           j++;
       }
        if(arr.size()%2!=0){
            return (arr[(arr.size())/2]/1.0);
        }
        return ( ( (arr[(arr.size())/2]) + (arr[((arr.size())/2)-1]) )/2.0);
    
    }
};