class Solution{
public:
int solve(int i,vector<int>&nums,vector<int>&dp){
    if(i==0){
        return nums[0];
    }
    if(i==1){
        return max(nums[0],nums[1]);
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    dp[i]=max(solve(i-1,nums,dp),nums[i]+solve(i-2,nums,dp));
    return dp[i];
}
    int rob(vector<int>& nums){
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>dp(n,-1);
        return solve(n-1,nums,dp);
        
    }
};