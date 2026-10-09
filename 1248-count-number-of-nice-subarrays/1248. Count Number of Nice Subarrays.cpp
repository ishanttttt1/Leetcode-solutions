class Solution{
public:
    int atmost(vector<int>&nums,int limit){
        int left=0;
        int oddcounts=0;
        int ans=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]%2!=0){
                oddcounts++;
            }
            while(oddcounts>limit){
                if(nums[left]%2!=0){
                    oddcounts--;
                }
                left++;
            }
            ans=ans+right-left+1;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};