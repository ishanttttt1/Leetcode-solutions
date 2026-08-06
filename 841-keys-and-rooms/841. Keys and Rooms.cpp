class Solution{
public:
void dfs(int rooms,vector<vector<int>>&graph,vector<bool>&visited){
    visited[rooms]=true;
    for(auto &key:graph[rooms]){
        if(!visited[key]){
            dfs(key,graph,visited);
        }
    }
}
    bool canVisitAllRooms(vector<vector<int>>& rooms){
        int n=rooms.size();
        vector<bool>visited(n,false);
        dfs(0,rooms,visited);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;

        
    }
};