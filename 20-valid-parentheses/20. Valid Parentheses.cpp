class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> bracket_map = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char ch : s) {
            if (bracket_map.count(ch)) {  // If it is a closing bracket
                if (st.empty() || st.top() != bracket_map[ch]) {
                    return false;
                }
                st.pop();
            } else {  // If it is an opening bracket
                st.push(ch);
            }
        }

        return st.empty();
    }
};