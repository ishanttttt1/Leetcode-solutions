class Solution{
public:
    int getLeastFrequentDigit(int n){
     if(n==0){
        return 0;
     } 
     unordered_map<int,int>mp;
     while(n>0){
        int digit=n%10;
        mp[digit]++;
        n=n/10;
     }
     int minFreq=INT_MAX;
     int ans=-1;
     for(auto it:mp){
        if(it.second<minFreq){
            minFreq=it.second;
            ans=it.first;
        }
        else if(it.second==minFreq&&it.first<ans){
            ans=it.first;
        }
     }
     return ans;
        
    }
};