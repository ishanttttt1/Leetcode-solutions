class Solution{
public:
    vector<int> targetIndices(vector<int>& nums, int target){
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        int first=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                first=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        low=0;
         high=nums.size()-1;
        int last=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
                last=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        vector<int>ans;
        for(int i=first;i<last;i++){
            ans.push_back(i);
        }
        return ans;
    }
};