class Solution{
public:
    int countValidPrefixes(string s){
        int zeross=0;
        int oness=0;
        int countss=0;
        for(char ch:s){
            if(ch=='0'){
                zeross++;
            }else{
                oness++;
            }
            if(abs(zeross-oness)<=1){
                countss++;
            }
        }
        return countss;
        
    }
};