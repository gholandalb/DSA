class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        vector<vector<int>> graph(n);
        for (auto edge : edges)
        {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        queue<int> q;
        q.push(source);
        set<int> visited;
        bool works = false;
        while (!q.empty())
        {
            if (q.front() == destination)
            {
                works = true;
                break;
            }
            for (auto c : graph[q.front()])
            {
                if (!visited.count(c))
                {
                    visited.insert(c);
                    q.push(c);
                }
            }
            q.pop();
        }
        return works;
    }
};