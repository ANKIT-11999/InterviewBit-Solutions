vector<vector<int> > Solution::solve(int A) {
   
    vector<vector<int> > vec( A , vector<int> (A));  
  
    for (int i = 0; i < A; i++) { 
        for (int j = 0; j < A; j++){ 
            vec[i][j] = 0; 
        } 
    }
     for (int i = 0; i < A; i++) { 
        for (int j = 0; j < A-i-1; j++){ 
            vec[i].pop_back(); 
        } 
    }

for (int i = 0; i < A; i++){
    vec[i][0] = vec[i][i] = 1;
}

   for (int i = 0; i < A; i++) { 
       
        for (int j = 1; j <i; j++){ 
          
       vec[i][j] = vec[i-1][j] + vec[i-1][j-1];
       
       
        } 
    }
    
   // , when j belongs to [1, i)  

    return vec;
    
    
    
    
}
