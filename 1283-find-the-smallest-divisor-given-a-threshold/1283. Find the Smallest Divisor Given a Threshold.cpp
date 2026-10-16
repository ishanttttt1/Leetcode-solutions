class Solution{
public:
    int smallestDivisor(vector<int>& nums, int threshold){
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                int division=ceil((double)nums[i]/mid);
                sum=sum+division;
            }
            if(sum<=threshold){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};