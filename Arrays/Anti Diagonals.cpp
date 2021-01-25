vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    
    vector<vector<int> >v;
    
int i=0;
        for(int j=0;j<A[i].size();j++){
            int counti=i,countj=j;
            vector<int> K;
            while(counti<A.size() && countj>=0){
                //  cout<<A[counti][countj]<<" ";
                 K.push_back(A[counti][countj]);
                     counti++;countj--;
            }
          
          v.push_back(K);
        }
i = 1;
for(;i<A.size();i++){
    int j = A.size()-1;
    vector<int> K;
          int counti=i,countj=j;
            while(counti<A.size() && countj>=i){
                 // cout<<A[counti][countj]<<" ";
                   K.push_back(A[counti][countj]);
                     counti++;countj--;
            }
   
           v.push_back(K);
  
}
  
  return v;
}
