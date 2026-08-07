class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int index=0;
        int sum=0;
        int gasSum=0;
        int costSum=0;
for(int i=0;i<n;i++){
    gasSum+=gas[i];
    costSum+=cost[i];
sum=sum+gas[i];
sum=sum-cost[i];
if(sum<0){
    index=i+1;
    sum=0;
}
}
if(gasSum<costSum)return -1;
return index;
    }
};