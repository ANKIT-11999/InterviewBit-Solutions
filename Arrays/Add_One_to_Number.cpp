vector<int> Solution::plusOne(vector<int> &A) {    
    int carry =1;
    int i= A.size()-1;
    for(;i>=0;i--){
        int x = (carry+A[i]);
        A[i] = x%10;
        carry = x/10;
        if(carry==0)
            break;
    }
    if(i<0 && carry>0){
        A[0] = carry;
        A.push_back(0);
    }
    if(A[0]==0){
        i=0;
        vector<int> B;
       for(;i<A.size();i++){
           if(A[i]!=0)
                break;
       } 
       for(int j=i;j<A.size();j++)
        B.push_back(A[j]);
        
        return B;
    }

    return A;
}
