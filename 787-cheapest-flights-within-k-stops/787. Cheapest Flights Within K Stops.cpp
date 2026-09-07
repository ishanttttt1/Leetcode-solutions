class Solution{
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k){
        vector<int> distance(n,INT_MAX);
        distance[src]=0;
        for(int i=0;i<k+1;i++){
            vector<int>temp=distance;
            for(auto flight:flights){
                int from=flight[0];
                int to=flight[1];
                int price=flight[2];
                if(distance[from]!=INT_MAX){
                    temp[to]=min(temp[to],distance[from]+price);
                }
            }
            distance=temp;
        }
        if(distance[dst]==INT_MAX){
            return-1;
        }
        else{
            return distance[dst];
        }
    }
};