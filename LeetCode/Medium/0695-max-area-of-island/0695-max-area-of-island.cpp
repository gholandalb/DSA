class Solution {
public:

    int count_n_paint(vector<vector<int>>& grid, int x, int y)
    {
        if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size())
        {
            if (grid[x][y] == 1 )
            {
                grid[x][y] = 2;
                int soma = 1;
                return soma + count_n_paint(grid, x + 1, y) + count_n_paint(grid, x - 1, y) + count_n_paint(grid, x, y + 1) + count_n_paint(grid, x, y - 1);
            }
        }
        return 0;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                ans = max((int)count_n_paint(grid, i, j), ans);
            }
        }
        return ans;
    }
};