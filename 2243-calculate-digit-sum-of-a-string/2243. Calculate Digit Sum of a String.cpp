
class Solution{
public:
    string digitSum(string s, int k){
         if(s.size()<=k){
            return s;
        }
        while(true){
            string new_string="";
            for(int i=0;i<s.size();i=i+k){
                int sum=0;
                string groups=s.substr(i,k);
                for(int j=0;j<groups.size();j++){
                   sum=sum+groups[j] -'0';
                }
                new_string=new_string+to_string(sum);
            }
            if(new_string.size()<=k){
                return new_string;
            }
            else{
                s=new_string;
                new_string.clear();
            }
        }
    }
};
