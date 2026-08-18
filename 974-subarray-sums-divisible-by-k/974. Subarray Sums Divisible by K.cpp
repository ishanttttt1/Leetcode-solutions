class Solution{
public:
    int subarraysDivByK(vector<int>& nums, int k){
    unordered_map<int,int>mp;
    int sum=0;
    int count=0;
         mp[0]=1;
for(int i=0;i<nums.size();i++){
    sum=sum+nums[i];
    int remainder=sum%k;
    if(remainder<0){
    remainder=remainder+k;
    }
    if(mp.find(remainder)!=mp.end()){
        count=count+mp[remainder];
    }
    mp[remainder]++;
}
return count;
    }
};