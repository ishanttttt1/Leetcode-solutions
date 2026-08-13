class Solution{
public:
    int partition(vector<int>&nums,int low,int high){
        int pivot=nums[high];
        int i=low-1;
        for(int j=low;j<high;j++){
            if(nums[j]<pivot){
                i++;
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[i+1],nums[high]);
        return i+1;
    }
 int findKthLargest(vector<int>& nums, int k){
    
    int n=nums.size();
    int target=n-k;
    int low=0;
    int high=n-1;
    while(low<=high){
        int p =partition(nums,low,high);
        if(p==target){
            return nums[p];
        }else if(p<target){
            low=p+1;
        }else{ 
        high=p-1;
        }
    }   
    return -1;
 }
};