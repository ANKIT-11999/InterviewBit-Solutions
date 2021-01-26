vector<int> Solution::nextPermutation(vector<int> &A) {
    
    int n = A.size();
    if(n==1)
    return A;
    int i = n-2;
    while(i!=0){
        if(A[i] < A[i+1])
            break;
            i--;
    }
    if(i==n-2){
    int temp = A[i];
    A[i] = A[i+1];
    A[i+1] = temp;
    return A;
    }
    if(i==0){
        sort(A.begin(),A.end());
        return A;
    }
    //cout<<A[i]<<endl;
    int j = i+1;
    int indexj ;
    int m = -10;
    while(j<n){
        if(A[j] <= A[i]){
            j++;
            continue;
        }
        else{
            if(m == -10){
                m = A[j];
                indexj = j;
                j++;
            }
            else{
                if(m>A[j])
                {
                    m = A[j];
                    indexj = j;
                    j++;
                }
            }
        }
    }
    
    int temp = A[i];
    A[i] = A[indexj];
    A[indexj] = temp;
    
    sort(A.begin()+i+1,A.end());
    
    
    return A;
}
