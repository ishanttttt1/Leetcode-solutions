class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string, unordered_map<string, double>> graph;

        // Build the graph
        for (int i = 0; i < equations.size(); ++i) {
            string a = equations[i][0];
            string b = equations[i][1];
            double value = values[i];
            graph[a][b] = value;
            graph[b][a] = 1.0 / value;
        }

        vector<double> results;
        for (const auto& query : queries) {
            string start = query[0];
            string end = query[1];
            results.push_back(dfs(start, end, graph, unordered_set<string>()));
        }

        return results;
    }

private:
    double dfs(const string& start, const string& end, const unordered_map<string, unordered_map<string, double>>& graph, unordered_set<string> visited) {
        if (graph.find(start) == graph.end() || graph.find(end) == graph.end()) {
            return -1.0;
        }

        if (start == end) {
            return 1.0;
        }

        visited.insert(start);
        for (const auto& neighbor : graph.at(start)) {
            if (visited.find(neighbor.first) == visited.end()) {
                double result = dfs(neighbor.first, end, graph, visited);
                if (result != -1.0) {
                    return result * neighbor.second;
                }
            }
        }

        return -1.0;
    }
};