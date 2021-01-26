int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    if(n<2)
        return 0;
    int arr[n];
    
    for(int i=0;i<n;i++)
    arr[i] = A[i];
    
    sort(arr,arr+n);
    
    int m=INT_MIN;
    
    for(int i=1;i<n;i++)
        m = max(m , arr[i]-arr[i-1]);
        
        return m;
}
