int length(int x){
    int count=0;
    
    while(x!=0){
        count++;
        x = x/10;
    }
    
    return count;
}
bool compare(int a , int b){
   /* int lasta = a%10;
    int lastb = b%10;
    while(a>=10)
        a = a/10;
      while(b>=10)
        b = b/10;
        
    if(a!=b)
    {
        if(a<b)
            return false;
        else
            return true;
    }
    else
        {
           if(lasta < lastb)
                return false;
            else
                return true;
        }*/
     
     long int ab = a*pow(10,length(b)) + b;
     
       long int ba = b*pow(10,length(a)) + a; 
       
       return ab>ba ? true:false;
        
}
string Solution::largestNumber(const vector<int> &A) {
    
    int n = A.size();
    
    int arr[A.size()];
    
    for(int i=0;i<n;i++)
        arr[i] = A[i];
    
   sort(arr,arr+n,compare);
   
   string s = "";
     for(int i=0;i<n;i++){
        //  ostringstream str1; 
        //  str1 << arr[i]; 
         
        //  string geek = str1.str();
         
         
        //  s += geek;
        s += to_string(arr[i]);
     }
     int i=0;
       for(;i<s.length();i++)
       {
           if(s[i] !='0')
                return s.substr(i);
       }
       if(i==s.length())
            return "0";
        
        return s;
   
   
}
