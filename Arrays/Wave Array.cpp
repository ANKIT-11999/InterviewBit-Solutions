#include<bits/stdc++.h>
vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
   
    for(int i=0;(i+1)<A.size();){
        
        int a = A[i];
        int b = A[i+1];
        if(a<b)
           {
               int temp = A[i];
               A[i] = A[i+1];
               A[i+1] = temp;
           }
           
            i = i+2;
        
        //  a = A[i];
        //  b = A[i+1];
        // if(a>b)
        //     {
        //       int temp = A[i-1];
        //       A[i-1] = A[i];
        //       A[i] = temp;
        //     }
      
        //     i++;
    }
    
    return A;
}
//34 99 78 16 35 97 26 12 67 10 33 79 49 79 21 67 72 93 36 85 45 28 91 94 57 1 53 8 44 68 90 24 96 30 3
