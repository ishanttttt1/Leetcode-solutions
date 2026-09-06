class Solution{
public:
int dr[4]={-1,1,0,0};
int dc[4]={0,0,-1,1};
void dfs(vector<vector<char>>&grid,int row,int col){
    int rows=grid.size();
    int cols=grid[0].size();
    if(row<0||row>=rows||col<0||col>=cols){
        return;
    }
    if(grid[row][col]=='0'){
        return;
    }
    grid[row][col]='0';
      for (int i = 0; i < 4; i++) {
            int newRow = row + dr[i];
            int newCol = col + dc[i];

            dfs(grid, newRow, newCol);
}
}
    int numIslands(vector<vector<char>>& grid){
         int rows = grid.size();
        int cols = grid[0].size();
        int islands = 0;
         for(int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                if (grid[i][j] == '1'){
                    islands++;
                    dfs(grid,i,j);
                }
            }
         }
         return islands;
    }
};