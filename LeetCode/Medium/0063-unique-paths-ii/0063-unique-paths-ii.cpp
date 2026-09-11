class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size(), m = obstacleGrid[0].size();

        vector<vector<int>> path(n, vector<int>(m));

        if (obstacleGrid[0][0] == 0)
            path[0][0] = 1;
        else
            path[0][0] = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 && j == 0)
                    continue;

                if (obstacleGrid[i][j] == 1)
                {
                    path[i][j] = 0;
                    continue;
                }

                if (i == 0)
                    path[i][j] = path[i][j - 1];

                else if (j == 0)
                    path[i][j] = path[i - 1][j];

                else
                    path[i][j] = path[i - 1][j] + path[i][j - 1];
            }
        }

        return path[n - 1][m - 1];
    }
};