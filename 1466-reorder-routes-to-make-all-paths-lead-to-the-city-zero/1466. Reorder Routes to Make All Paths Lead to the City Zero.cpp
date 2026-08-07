class Solution{
public:
    int count = 0;
    void dfs(int node, vector<vector<pair<int, int>>>& adj, vector<bool>& visited){
        visited[node] = true;
        for (auto& it : adj[node]){
            int neighbor = it.first;
            int cost = it.second;
            if (!visited[neighbor]){
                count += cost;
                dfs(neighbor, adj, visited);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections){
        vector<vector<pair<int, int>>> adj(n);
        for (auto& edge : connections){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back({v, 1});
            adj[v].push_back({u, 0});
        }
        vector<bool> visited(n, false);
        dfs(0, adj, visited);
        return count;
    }
};