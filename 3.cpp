// Time  Complexity O(n1+n2+n3)  
// Space Complexity O(n1+n2+n3+Size_Of_Resultant_Vector)
public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>res;
            map<int,int>mp1;
            map<int,int>mp2;
            map<int,int>mp3;
            for(int i=0;i<n1;i++){
                mp1[A[i]]++;
            }
             for(int i=0;i<n2;i++){
                mp2[B[i]]++;
            }
             for(int i=0;i<n3;i++){
                mp3[C[i]]++;
            }
            for(int i=0;i<n1;i++){
                if(mp1[A[i]]>0 && mp2[A[i]]>0 && mp3[A[i]]>0){ 
                res.push_back(A[i]);
                mp1[A[i]]=0;
                }
            }
            return res;
        }
};