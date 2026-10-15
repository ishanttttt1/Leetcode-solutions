class Solution{
public:
    int sumCounts(vector<int>& nums){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>mp;
            int count=0;
        for(int j=i;j<nums.size();j++){
            if(mp.find(nums[j])==mp.end()){
                count++;
                mp[nums[j]]=1;
            }
             sum=sum+count*count;
        }
        }
        return sum;
    }   
};