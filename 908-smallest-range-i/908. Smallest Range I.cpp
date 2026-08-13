class Solution{
public:
    int smallestRangeI(vector<int>& nums, int k){
        int MinElement=*min_element(nums.begin(),nums.end());
        int MaxElement=*max_element(nums.begin(),nums.end());
        int range =MaxElement-MinElement;
        int Newrange=range-2*k;
        return max(0,Newrange);
    }
};