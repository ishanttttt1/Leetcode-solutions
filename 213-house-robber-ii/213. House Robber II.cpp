class Solution{
public:
    int solve(int i, int start, vector<int>& nums, vector<int>& dp){
        if (i == start) {
            return nums[i];
        }
        if (i == start + 1){
            return max(nums[start], nums[i]);
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        dp[i] = max(
            solve(i - 1, start, nums, dp),
            nums[i] + solve(i - 2, start, nums, dp)
        );
        return dp[i];
    }
    int rob(vector<int>& nums){
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        vector<int> dp(n, -1);
        int case1 = solve(n - 2, 0, nums, dp);
        fill(dp.begin(), dp.end(), -1);
        int case2 = solve(n - 1, 1, nums, dp);
        return max(case1, case2);
    }
};