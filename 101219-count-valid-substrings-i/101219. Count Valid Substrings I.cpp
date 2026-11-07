class Solution{
public:
    long long countValidSubstrings(string s){
        int n = s.size();
        long long counts = 0;
        int lasts = -1;
        for (int i=0;i<n;i++){
            if (i >= 2 && s[i - 2] == 'a' &&s[i - 1] == 'b' && s[i] == 'c'){
                lasts = i - 2;
            }
            counts += (i - lasts);
        }
        return counts;
    }
};
