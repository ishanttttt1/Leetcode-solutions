class Solution{
public:
int INF=1e9;
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold){
        vector<vector<int>>dist(n,vector<int>(n,INF));
            for(int i=0;i<n;i++){
                dist[i][i]=0;
            }
            for(auto&edge:edges){
                int u=edge[0];
                int v=edge[1];
                int weight=edge[2];
                dist[u][v]=weight;
                dist[v][u]=weight;
            }
            for(int k=0;k<n;k++){
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                        
                    }
                }
            }
            int smallest=INT_MAX;
            int ans=-1;
            for(int i=0;i<n;i++){
                int count=0;
                for(int j=0;j<n;j++){
                    if(i!=j&&dist[i][j]<=distanceThreshold){
                        count++;
                    }
                }
                if(count<=smallest){
                    smallest=count;
                    ans=i;
                }
            }
        return ans;
    }
};