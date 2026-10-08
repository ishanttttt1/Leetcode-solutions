class Solution {
public:
    std::string removeOuterParentheses(std::string s) {
        std::string result = "";
        int count = 0;
        int start = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                count++;
            } else {
                count--;
            }

            if (count == 0) {
                result += s.substr(start + 1, i - start - 1);
                start = i + 1;
            }
        }

        return result;
    }
};