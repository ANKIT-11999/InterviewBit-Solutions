#include<bits/stdc++.h>
vector<vector<int> > Solution::generateMatrix(int A) {
    
  vector<vector<int> > v( A , vector<int> (A));  
  
    for (int i = 0; i < A; i++) { 
        for (int j = 0; j < A; j++){ 
            v[i][j] = 0; 
        } 
    } 
  
     int x = 1;
       for(int i=0;i<=(A/2);i++){
       //int i=0;
          for(int j=i;j<(A-i);j++)
              v[i][j] = x++;
          
           int m = A-i-1;
           
          for(int j = i+1;j<(A-i);j++)
            v[j][m] = x++;
        
         for(int j = A-i-2;j>=i;j--)
            v[m][j] = x++;
            
         m = i;
           
         for(int j = A-i-2;j>i;j--)
            v[j][m] = x++;
         
     }
    return v;
   
}
