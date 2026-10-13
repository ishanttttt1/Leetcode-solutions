class Solution{
public:
    long long maxAlternatingSum(vector<int>& nums){
        vector<long long>squares;
        for(int i=0;i<nums.size();i++){
            long long square=1LL*nums[i]*nums[i];
            squares.push_back(square);
        }
        sort(squares.begin(),squares.end(),greater<long long>());
        int left=0;
        int right=squares.size()-1;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans=ans+squares[left];
                left++;
            }else{
                ans=ans-squares[right];
                right--;
            }
        }
        return ans;
        
    }
};