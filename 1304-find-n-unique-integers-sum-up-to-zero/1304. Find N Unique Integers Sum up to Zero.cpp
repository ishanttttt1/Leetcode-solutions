class Solution{
public:
    vector<int>sumZero(int n){
        int x=1;
        vector<int>AnsArray{};
        while(AnsArray.size()!=n){
            if(n%2==0){
            AnsArray.push_back(-x);
            AnsArray.push_back(x);
            x++;
        }else{
            if(AnsArray.size()==n-1){
                AnsArray.push_back(0);
         }else{
            AnsArray.push_back(-x);
            AnsArray.push_back(x);
            x++;
        }
        }
        }
return AnsArray;
    }
};