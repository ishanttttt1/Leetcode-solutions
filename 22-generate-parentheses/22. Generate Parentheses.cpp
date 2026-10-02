class Solution{
public:
vector<string>ans;
void backtrack(int open,int close,int n,string&current){
    if(open==n&&close==n){
        ans.push_back(current);
        return;
    }
    if(open<n){
        current.push_back('(');
        backtrack(open+1,close,n,current);
        current.pop_back();
    }
    if(close<open){
        current.push_back(')');
        backtrack(open,close+1,n,current);
        current.pop_back();
    }
}
    vector<string> generateParenthesis(int n){
        string current;
        backtrack(0,0,n,current);
        return ans;
    }
};