class Solution{
public:
    int longestMonotonicSubarray(vector<int>& nums){
        int ans=1;
        int strictlyincreasingsubarray=1;
        int strictlydcreasingsubarray=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                strictlyincreasingsubarray++;
                strictlydcreasingsubarray=1;
            }
            else if(nums[i]<nums[i-1]){
                strictlydcreasingsubarray++;
                strictlyincreasingsubarray=1;
            }
            else{
                 strictlyincreasingsubarray=1;
                 strictlydcreasingsubarray=1;
            }
        ans=max(ans,max(strictlyincreasingsubarray,strictlydcreasingsubarray));
            }
            return ans;
    }
};