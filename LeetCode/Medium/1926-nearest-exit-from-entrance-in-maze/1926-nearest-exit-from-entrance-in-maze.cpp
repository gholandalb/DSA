class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n = maze.size(), m = maze[0].size();

        queue<pair<int, int>> to_visit;

        vector<vector<bool>> visited(n, vector<bool>(m, false));
        vector<vector<int>> passos(n, vector<int>(m, 0));

        to_visit.push({entrance[0], entrance[1]});
        visited[entrance[0]][entrance[1]] = true;

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        while (!to_visit.empty())
        {
            int x = to_visit.front().first;
            int y = to_visit.front().second;

            to_visit.pop();

            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                    continue;

                if (maze[nx][ny] == '+' || visited[nx][ny])
                    continue;

                passos[nx][ny] = passos[x][y] + 1;

                if (nx == 0 || nx == n - 1 || ny == 0 || ny == m - 1)
                    return passos[nx][ny];

                visited[nx][ny] = true;
                to_visit.push({nx, ny});
            }
        }

        return -1;
    }
};