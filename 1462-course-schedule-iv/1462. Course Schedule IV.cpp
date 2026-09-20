class Solution{
public:
    vector<bool>checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries){
            vector<vector<bool>>reachable(numCourses,vector<bool>(numCourses,false));
            for(auto&prerequisite:prerequisites){
                int u=prerequisite[0];
                int v=prerequisite[1];
                reachable[u][v]=true;
            }
            for(int k=0;k<numCourses;k++){
                for(int i=0;i<numCourses;i++){
                    for(int j=0;j<numCourses;j++){
                        reachable[i][j]=reachable[i][j]||(reachable[i][k]&&reachable[k][j]);
                    }
                }
            }
            vector<bool>ans;
            for(auto&query:queries){
                int u=query[0];
                int v=query[1];
                ans.push_back(reachable[u][v]);
            }
            return ans;
    }
};