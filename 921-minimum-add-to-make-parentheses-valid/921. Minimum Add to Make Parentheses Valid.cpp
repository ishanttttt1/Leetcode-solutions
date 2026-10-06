class Solution{
public:
    int minAddToMakeValid(string s){
        int opencount=0;
        int addcount=0;
        for(char c:s){
            if(c=='('){
                opencount++;
            }
            if(c==')'){
                if(opencount>0){
                opencount--;
                }else{
                    addcount++;
                }
            }
            }
            int ans=opencount+addcount;
        return ans;
    }
};