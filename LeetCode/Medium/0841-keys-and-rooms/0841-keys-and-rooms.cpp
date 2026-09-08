class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        queue<int> to_visit;
        to_visit.push(0);
        visited[0] = true;
        while(!to_visit.empty())
        {
            for (auto c : rooms[to_visit.front()])
            {
                if (visited[c])
                    continue;
                visited[c] = true;
                to_visit.push(c);
            }
            to_visit.pop();
        }
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == false)
                return false;
        }
        return true;
    }
};