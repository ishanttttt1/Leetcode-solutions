class Solution{
public:
    int maxSubarraySumCircular(vector<int>& nums){
        int currentmax=nums[0];
        int currentmin=nums[0];
        int maxsum=nums[0];
        int minsum=nums[0];
        int totalsum=nums[0];
        for(int i=1;i<nums.size();i++){
            int num=nums[i];
            currentmax=max(num,currentmax+num);
            currentmin=min(num,currentmin+num);
            maxsum=max(maxsum,currentmax);
            minsum=min(minsum,currentmin);
            totalsum=totalsum+num;
        }
        if(maxsum<0){
            return maxsum;
        }
        return max(maxsum,totalsum-minsum);
    }
};