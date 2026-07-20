class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int c=1;
        for(int f=0;f<nums.size();f++){
            if(nums[f]!=nums[c-1]){
                nums[c]=nums[f];
                c++;
            }

        }
      return c;
    }
};