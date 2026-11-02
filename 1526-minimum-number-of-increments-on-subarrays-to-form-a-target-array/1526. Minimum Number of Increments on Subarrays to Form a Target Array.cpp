class Solution{
    public:
    int minNumberOperations(vector<int>& target){
        int sum=target[0];
        int difference=0;
        for(int i=1;i<target.size();i++){
            difference=target[i]-target[i-1];
            if(difference>0){
                sum=sum+difference;
            }
        }
        return sum;
    }
};