class Solution{
public:
bool solve(int i,vector<int>&nums,vector<int>&dp){
    if(i==nums.size()-1){
        return true;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    for(int jump=1;jump<=nums[i];jump++){
        int next=i+jump;
        if(next<nums.size()&&solve(next,nums,dp)){
            return dp[i]=true;
        }
    }
    return dp[i]=false;
}
    bool canJump(vector<int>& nums){
        int n=nums.size();
        vector<int>dp(n,-1);
        return solve(0,nums,dp);
    }
};