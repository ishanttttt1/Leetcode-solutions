class Solution{
public:
    int minOperations(vector<int>& nums, int k){
        int count =0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        int i=0;
            while(sum % k!=0){
                nums[i]=nums[i]-1;
                sum=sum-1;
                count++;
                i=(i+1)%nums.size();
            }
        
        return count;
    }
};