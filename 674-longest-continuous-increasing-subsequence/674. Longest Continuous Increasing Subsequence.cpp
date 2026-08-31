class Solution{
public:
    int findLengthOfLCIS(vector<int>& nums){
        int length=1;
        int longest=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                length++;
                longest=max(longest,length);
            }else{
                length=1;
            }
        }  
        return longest;     
    }
};