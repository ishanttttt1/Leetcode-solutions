class Solution{
public:
    int minimumEffortPath(vector<vector<int>>& heights){
        int n = heights.size();
        int m = heights[0].size();
        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>
        > pq;
          vector<vector<int>> effort(n, vector<int>(m, INT_MAX));
        effort[0][0] = 0;
        pq.push({0, {0, 0}});
        vector<pair<int, int>> dir = {
            {-1, 0},
            {1, 0},
            {0, -1},
            {0, 1}
        };
        while (!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int currEffort = it.first;
            int row = it.second.first;
            int col = it.second.second;
            if (row == n - 1 && col == m - 1)
                return currEffort;
            for (auto d : dir) {
                int newRow = row + d.first;
                int newCol = col + d.second;
                if (newRow >= 0 && newRow < n &&
                    newCol >= 0 && newCol < m) {
                    int edgeWeight = abs(
                        heights[row][col] -
                        heights[newRow][newCol]
                    );
                     int newEffort = max(currEffort, edgeWeight);
                    if (newEffort < effort[newRow][newCol]){
                        effort[newRow][newCol] = newEffort;
                        pq.push({newEffort, {newRow, newCol}});
                    }
                }
            }
        }
        return 0;
    }
};