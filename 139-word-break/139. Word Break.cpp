class Solution{
public:
vector<int>dp;
bool solve(int i,string&s,unordered_set<string>&dict){
    if(i==s.length()){
        return true;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    for(int j=i;j<s.length();j++){
        string word=s.substr(i,j-i+1);
        if(dict.count(word)){
            if(solve(j+1,s,dict)){
                return dp[i]=true;
            }
        }
    }
    return dp[i]=false;
}
    bool wordBreak(string s, vector<string>& wordDict){
        int n=s.length();
        dp.assign(n,-1);
        unordered_set<string>dict(wordDict.begin(),wordDict.end());
        return solve(0,s,dict);        
    }
};