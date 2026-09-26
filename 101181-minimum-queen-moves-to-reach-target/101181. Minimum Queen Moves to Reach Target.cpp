class Solution{
public:
    int minQueenMoves(vector<int>& source, vector<int>& target){
        int sr = source[0], sc = source[1];
        int tr = target[0], tc = target[1];
        if (sr == tr && sc == tc)
            return 0;
        queue<pair<int, int>> q;
        vector<vector<bool>> visited(9, vector<bool>(9, false));
        vector<pair<int, int>> directions ={
            {-1, 0}, {1, 0}, {0, -1}, {0, 1},
            {-1, -1}, {-1, 1}, {1, -1}, {1, 1}
        };
        q.push({sr, sc});
        visited[sr][sc] = true;
        int moves = 0;
        while (!q.empty()) {
            int size = q.size();
            moves++;
            while (size--){
                auto [r, c] = q.front();
                q.pop();
                for (auto [dr, dc] : directions){
                    int nr = r + dr;
                    int nc = c + dc;
                    while (nr >= 1 && nr <= 8 && nc >= 1 && nc <= 8){
                        if (nr == tr && nc == tc)
                            return moves;
       if (!visited[nr][nc]){
                        visited[nr][nc] = true;
                       q.push({nr, nc});
                        }
                        nr += dr;
                        nc += dc;
                    }
                }
            }
        }
        return -1;     
    }
};
