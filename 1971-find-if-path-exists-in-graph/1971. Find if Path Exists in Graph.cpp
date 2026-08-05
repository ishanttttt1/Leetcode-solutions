class Solution{
public:
bool dfs(int currentnode,int destination,vector<vector<int>>&graph,vector<bool>&visited){
    if(visited[currentnode]){
        return false;
    }
    if(currentnode==destination){
        return true;
    }
    visited[currentnode]=true;
    for(int neighbor:graph[currentnode]){
if(dfs(neighbor,destination,graph,visited))
return true;
    }
    return false;
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination){
        vector<vector<int>>graph(n);
        vector<bool>visited(n,false);
        for(auto &edges:edges){
            graph[edges[0]].push_back(edges[1]);
            graph[edges[1]].push_back(edges[0]);
        }
        return dfs(source,destination,graph,visited);
    }
};