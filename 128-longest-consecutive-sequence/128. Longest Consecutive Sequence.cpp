class Solution{
public:
    int longestConsecutive(vector<int>& nums){
       unordered_set<int>st(nums.begin(),nums.end());
       int count=0;
       int longest=0;
       for(int x:st){
        if(st.find(x-1)==st.end()){
            count=1;
            int current=x;
            while(st.find(current+1)!=st.end()){
                current++;
                count++;
            }
        }
        if(count>longest){
            longest=count;
        }
       }
       return longest; 
    }
};