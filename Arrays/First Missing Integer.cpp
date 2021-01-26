 int Solution::firstMissingPositive(vector<int> &arr) {
     
  int n = arr.size();
  for(int i=0;i<n;i++){
      if(arr[i] <=0)
      arr[i] = n+1;
      
  }
  
  for(int i=0;i<n;i++){
      int ele = abs(arr[i])-1;
      if(ele <n && arr[ele] >0)
      arr[ele] = -1*arr[ele];
  }
  for(int i=0;i<n;i++){
      if(arr[i] >0)
      return i+1;
  }
  return n+1;
  
}
