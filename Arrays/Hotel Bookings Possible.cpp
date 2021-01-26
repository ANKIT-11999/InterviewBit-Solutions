#include<bits/stdc++.h>
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int n = arrive.size();
    
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
     
    int room_needed=1,room_present=1;
    
    int i=1,j=0;
    
    while(i<n && j<n){
        if(arrive[i] <depart[j]){
             room_needed++;
             i++;
        }
        else if(arrive[i] >= depart[j]){
             room_needed--;
             j++;
        }
        
        if( room_needed >  room_present)
         room_present =  room_needed;
    }
    
    if(room_present <= K)
        return true;
    else
        return false;
    
}
