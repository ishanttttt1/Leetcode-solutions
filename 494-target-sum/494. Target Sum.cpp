class Solution{
public:
int solve(int index,int target,vector<int>&nums,vector<vector<int>>&dp){
    if(index==0){
        if(target==0&&nums[0]==0)return 2;
        if(target==0||nums[0]==target)return 1;
        return 0;
    }
    if(dp[index][target]!=-1)return dp[index][target];
    int notpick=solve(index-1,target,nums,dp);
    int pick=0;
    if(nums[index]<=target){
        pick=solve(index-1,target-nums[index],nums,dp);
    }
    return dp[index][target]=pick+notpick;
}
    int findTargetSumWays(vector<int>& nums, int target){
        int totalSum = 0;
        for (int num : nums) totalSum += num;
        if ((totalSum + target) % 2 != 0 || totalSum < abs(target)) return 0;
        int s1 = (totalSum + target) / 2;
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(s1 + 1, -1));
        return solve(n - 1, s1, nums, dp);
    }
};