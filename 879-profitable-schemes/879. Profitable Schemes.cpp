class Solution {
public:
    const int MOD = 1000000007;
int solve(int index,int people,int profit,vector<int>& group,vector<int>& profits,int n,int minProfit,vector<vector<vector<int>>>&dp){
        if (people > n){
            return 0;
              }
        if (index == group.size()){
            return profit >= minProfit;
              }
        if (dp[index][people][profit] != -1){
            return dp[index][people][profit];
        }
int notTake=solve(index + 1,people,profit,group,profits,n,minProfit,dp);
int newProfit=min(minProfit, profit + profits[index]);
int take =solve(index + 1,people + group[index],newProfit,group,profits,n,minProfit,dp);
        return dp[index][people][profit] =(take + notTake) % MOD;
    }
    int profitableSchemes(int n,int minProfit,vector<int>& group,vector<int>& profit) {
        int m = group.size();
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n + 1,
                vector<int>(minProfit + 1, -1)));
        return solve(0,0,0,group,profit,n,minProfit,dp);
    }
};