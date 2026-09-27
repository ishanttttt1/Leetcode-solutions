class Solution{
public:
    string reverseParentheses(string s){
        stack<char>st;
        for(char c:s){
            if(c=='('){
                st.push(c);
            }else if(c==')'){
                string temp="";
                while(st.top()!='('){
                    char x=st.top();
                    st.pop();
                    temp=temp+x;
                }
                st.pop();
                for(char ch:temp){
                    st.push(ch);
                }
            }
            else{
                st.push(c);
            }
        }
            string ans="";
            while(!st.empty()){
                ans=ans+st.top();
                st.pop();
            }   
        reverse(ans.begin(),ans.end());
        return ans;
    }
};