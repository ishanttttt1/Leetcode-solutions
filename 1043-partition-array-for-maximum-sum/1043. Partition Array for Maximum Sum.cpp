class Solution{
public:
    int solve(int i,int k,vector<int>&arr,vector<int>&dp){
        if(i<0){
            return 0;
        }
        if(i==0){
            return arr[0];
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int maxval=INT_MIN;
        int ans=INT_MIN;
        for(int len=1;len<=k&&len<=i+1;len++){
            maxval=max(maxval,arr[i-len+1]);
            int sum=solve(i-len,k,arr,dp)+(len*maxval);
            ans=max(ans,sum);
        }
        return dp[i]=ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k){
        int n=arr.size();
        vector<int>dp(n,-1);
        return solve(n-1,k,arr,dp);    
    }
};