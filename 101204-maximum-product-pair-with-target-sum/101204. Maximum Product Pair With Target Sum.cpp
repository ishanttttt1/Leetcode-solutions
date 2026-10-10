class Solution{
public:
    vector<int> maxProductPair(vector<int>& nums, int target){
        int product=INT_MIN;
        vector<int>ans{-1,-1};
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j&& nums[i]>nums[j]&&nums[i]+nums[j]==target){
                    int currenttproduct=nums[i]*nums[j];
                if(currenttproduct>product){
                    product=currenttproduct;
                    ans={i,j};
                }
                }
            }
        }
        return ans;
    }
};