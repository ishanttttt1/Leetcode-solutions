class Solution{
public:
    int minPairSum(vector<int>& nums){
    sort(nums.begin(),nums.end(),greater<int>());
    int left=0;
    int right=nums.size()-1;
    int maxsum=0;
    while(left<right){
        int pairsum=nums[left]+nums[right];
        maxsum=max(maxsum,pairsum);
        left++;
        right--;
    }     
    return maxsum;
        
    }
};