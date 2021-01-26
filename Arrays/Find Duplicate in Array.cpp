#include<bits/stdc++.h>
int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    int arr[n];
    
   // cout<<n<<endl;
   
    for(int i=0;i<n;i++)
        arr[i] = 0;
    
    for(int i =0;i<n;i++){
        if(arr[A[i]] ==0)
            arr[A[i]] = -1;
            
        else 
            return A[i];
    }
    
  /*  unordered_map<int,int> seen;
         for(int i =0;i<n;i++){
             if(seen[A[i]] ==0)
             seen[A[i]] = 1;
             else
                 seen[A[i]]++;
             
         }
           
            
    unordered_map<int,int>:: iterator it = seen.begin();
    
    while(it!= seen.end()){
        if(it->second == 2)
            return it->first;
            
       //cout<<it->second<<endl;
            it++;
    }*/
    
    return -1;
}
