int Solution::repeatedNumber(const vector<int> &A) {
   
   int n = A.size();
   if(n==1)
    return A[0];
   int count = A.size()/3;
   
   int arr[n];
   for(int i=0;i<n;i++)
   arr[i] = A[i];
   
   sort(arr,arr+n);
   int tc = 1;
   for(int i=1;i<n;i++){
       if(arr[i] == arr[i-1]){
            tc++;
        if(tc>count)
            return arr[i];
       }
       else{
           tc=1;
       }
           
    
   }
   return -1;
   
}
