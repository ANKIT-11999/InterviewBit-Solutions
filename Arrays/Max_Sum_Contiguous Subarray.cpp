#include<bits/stdc++.h>
int Solution::maxSubArray(const vector<int> &A) {
    
    int curr = A[0];
    int maxi = A[0];
    
    for(int i=1;i<A.size();i++){
       
        curr = max(A[i],curr+A[i]);
        maxi = max(maxi,curr);
    }
    
    return maxi;
}
