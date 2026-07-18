class Solution{
public:
    string rearrangeString(string s, char x, char y){
        string ys = "", others = "", xs = "";
        for (char c : s){
            if (c == y)
                ys += c;
            else if (c == x)
                xs += c;
            else
                others += c;
        }
        return ys + others + xs;
    }
};