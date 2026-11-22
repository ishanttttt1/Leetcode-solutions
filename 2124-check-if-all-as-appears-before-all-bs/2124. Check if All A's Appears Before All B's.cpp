class Solution{
public:
    bool checkString(string s){
        bool seenb=false;
        for(char c:s){
            if(c=='b'){
                seenb=true;
            }
            if(c=='a'&&seenb){
                return false;
            }
            }
            return true;  
    }
};