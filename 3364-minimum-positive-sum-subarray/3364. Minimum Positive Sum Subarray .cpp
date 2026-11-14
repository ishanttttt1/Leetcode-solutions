class Solution{
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r){
        int minimum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int length=j-i+1;
                if(length>=l&&length<=r){
                    int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+nums[k];
            }
            if(sum>0){
                minimum=min(sum,minimum);
            }
                }

            }
        }
        if(minimum==INT_MAX){
            return-1;
        }
        return minimum;

    }
};