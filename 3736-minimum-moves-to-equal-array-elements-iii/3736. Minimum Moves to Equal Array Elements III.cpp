class Solution{
public:
    int minMoves(vector<int>& nums){
        int max=*max_element(nums.begin(),nums.end());
        int difference=0;
        for(int i=0;i<nums.size();i++){
            difference=difference+(max-nums[i]);
        }
        return difference;
    }
};