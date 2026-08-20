class Solution{
public:
    int minAbsoluteDifference(vector<int>& nums){
        int lastone=-1;
        int lasttwo=-1;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                lastone=i;
            }
            if(nums[i]==2){
                lasttwo=i;
            }
            if(lastone!=-1&&lasttwo!=-1){
                auto diff=abs(lastone-lasttwo);
                ans=min(ans,diff);
            }
        }
        if(ans==INT_MAX){
            return-1;
        }
        return ans;
    }
};