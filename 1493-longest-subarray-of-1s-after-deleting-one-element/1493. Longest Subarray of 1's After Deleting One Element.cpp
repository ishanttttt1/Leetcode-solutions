class Solution{
public:
    int longestSubarray(vector<int>& nums){
    int left=0;
    int right=0;
    int zerocount=0;
    int maxones=0;
    while(right<nums.size()){
        if(nums[right]==0){
            zerocount++;
        }
    while(zerocount>1){
        if(nums[left]==0){
            zerocount--;
        }
        left++;
    }
    maxones=max(maxones,right-left);
    right++;
    }
    return maxones;
    }
};