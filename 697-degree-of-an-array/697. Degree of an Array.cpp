class Solution{
public:
struct info{
    int freq;
    int firstidx;
    int lastidx;
};
    int findShortestSubArray(vector<int>& nums){
    unordered_map<int,info>mp;
    for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i])==mp.end()){
            mp[nums[i]].freq=1;
            mp[nums[i]].firstidx=i;
            mp[nums[i]].lastidx=i;
        }else{
            mp[nums[i]].freq++;
            mp[nums[i]].lastidx=i;
        }
    }    
      int degree = 0;
        for (auto& [num, info] : mp){
            degree = max(degree, info.freq);
        }
        int smallestLength = nums.size();
        for (auto& [num, info] : mp){
            if (info.freq==degree){
                int length = info.lastidx - info.firstidx + 1;
                smallestLength = min(smallestLength, length);
            }
        }
        return smallestLength;         
    }
};