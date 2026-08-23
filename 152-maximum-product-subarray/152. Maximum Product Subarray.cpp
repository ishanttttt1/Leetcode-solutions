class Solution{
public:
    int maxProduct(vector<int>& nums){
        int currentmax=nums[0];
        int currentmin=nums[0];
        int result=nums[0];
        for(int i=1;i<nums.size();i++){
            int num=nums[i];
            if(num<0){
                swap(currentmax,currentmin);
            }
            currentmax=max(num,currentmax*num);
            currentmin=min(num,currentmin*num);
            result=max(result,currentmax);
        }
        return result;
        
    }
};