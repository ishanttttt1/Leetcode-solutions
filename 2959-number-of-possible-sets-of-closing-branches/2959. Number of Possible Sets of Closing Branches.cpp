class Solution{
public:
    int numberOfSets(int n, int maxDistance, vector<vector<int>>& roads){
        const int INF = 1e9;
        vector<vector<int>> base(n, vector<int>(n, INF));
        for(int i=0; i<n;i++) {
            base[i][i] = 0;
        }
        for(auto &road:roads){
            int u=road[0];
            int v =road[1];
            int cost =road[2];
            base[u][v] = min(base[u][v], cost);
            base[v][u] = min(base[v][u], cost);
        }
        int ans = 0;
        for(int mask = 0; mask < (1 << n); mask++){
              vector<vector<int>> dist = base;
            bool valid = true;
            for(int k = 0; k < n; k++){
                if(mask & (1 << k)){
                    continue;
                }
                for(int i = 0; i < n; i++){
                    if(mask & (1 << i)){
                        continue;
                    }
                    for(int j = 0; j < n; j++){
                        if(mask & (1 << j)){
                            continue;
                        }
                        dist[i][j] = min(dist[i][j],dist[i][k] + dist[k][j]);
                    }
                }
            }
            for(int i = 0; i < n; i++){
                if(mask & (1 << i))
                    continue;
                for(int j = 0; j < n; j++){
                    if(mask & (1 << j)){
                        continue;
                    }
                    if(dist[i][j] > maxDistance){
                        valid = false;
                    }
                }
            }
            if(valid){
                ans++;
            }
        }
        return ans;
    }
};