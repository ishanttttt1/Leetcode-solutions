class Solution{
public:
    int findMinDifference(vector<string>& timePoints){
        bool seen[1440]={};
        for (string t : timePoints){
        int hours=stoi(t.substr(0,2));
        int minutes=stoi(t.substr(3,4));
        int minute=hours*60+minutes;
        if(seen[minute]){
            return 0;
        }
        seen[minute]=true;
    }
        int first=-1;
        int last=-1;
        int ans=INT_MAX;
        for(int i=0;i<1440;i++){
            if(seen[i]){
            if(first==-1){
                first=i;
                last=i;
            }else{
                ans=min(ans,i-last);
                last=i;
            }
        }
        }
        ans=min(ans,1440-last+first);
        return ans;
        }
};