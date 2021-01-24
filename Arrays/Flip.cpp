#include<bits/stdc++.h>
vector<int> Solution::flip(string A) {
   /* int n = s.size();
    
    vector<int> A(n);
    
    for(int i=0;i<n;i++){
        if(s[i] =='1')
            A[i] = -1;
        else
            A[i] = 1;
    }
    int start=INT_MAX,end=INT_MAX;
    int curr = 0;
     int sum =0;
     int a =0;
     
     for(int i=0;i<n;i++){
         int x = A[i];
       
       if(curr+x<0){
           a = i+1;
           curr = 0;
       }
       else
        curr += x;
        if(sum< curr){
            sum = curr;
            start = a;
            a = i;
        }
       
     }
    
    
    
    vector<int> v;
    if(a==INT_MAX)
        return vector<int>( );
    v.push_back(start+1);
    v.push_back(end+1);
    
    return v;*/
        int n=A.length();

    //build new array of 1s and -1s
    vector<int> ar(n);
    for(int i=0; i<n; i++)
        if(A[i]=='1')ar[i]=-1;
        else ar[i]=1;

    //pair storing the answer
    pair<int, int> ans=make_pair(INT_MAX, INT_MAX);

    //basic kadane's algorithm implementation
    //we also storing the begin point for best till now
    int best_till_now=0,best_ending_here=0,l=0;
    for(int i=0; i<n; i++){
        if(best_ending_here+ar[i]<0){
            l=i+1;
            best_ending_here=0;
        }
        else best_ending_here+=ar[i];
        if(best_ending_here>best_till_now){
            best_till_now=best_ending_here;
            ans.first=l;
            ans.second=i;
        }
    }

    //if no valid subarray found
    if(ans.first==INT_MAX)return vector<int>();

    //return answer
    vector<int> ret;
    ret.push_back(ans.first+1);
    ret.push_back(ans.second+1);
    return ret;
}
