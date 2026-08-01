class Solution{
public:
    string removeTrailingZeros(string num){
        for(int j=num.size()-1;j>=0;j--){
            if(num[j]=='0'){
                num.pop_back();
            }else{
                break;
            }
        }
        return num;
    }
};