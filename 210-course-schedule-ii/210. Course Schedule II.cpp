class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> inDegree(numCourses, 0);
        vector<int> courseOrder;
        
        // Build adjacency list and in-degree count
        for (auto& pre : prerequisites) {
            int course = pre[0];
            int prerequisite = pre[1];
            adj[prerequisite].push_back(course);
            inDegree[course]++;
        }
        
        // Queue for courses with no prerequisites (in-degree = 0)
        queue<int> q;
        for (int i = 0; i < numCourses; i++) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }
        
        // Process courses in topological order
        while (!q.empty()) {
            int course = q.front();
            q.pop();
            courseOrder.push_back(course);
            
            for (int nextCourse : adj[course]) {
                inDegree[nextCourse]--;
                if (inDegree[nextCourse] == 0) {
                    q.push(nextCourse);
                }
            }
        }
        
        // If all courses are processed, return order; otherwise, return empty array (cycle detected)
        return (courseOrder.size() == numCourses) ? courseOrder : vector<int>();
    }
};