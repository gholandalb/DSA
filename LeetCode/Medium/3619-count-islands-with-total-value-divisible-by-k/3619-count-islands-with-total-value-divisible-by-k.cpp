class Solution {
public:

    long long island_total(vector<vector<int>>& grid, int x, int y)
    {
        long long ans;
        if (x >= grid.size() || y >= grid[0].size() || y < 0 || x < 0 || grid[x][y] == 0)
            return 0;
        else
        {
            ans = grid[x][y];
            grid[x][y] = 0;
        }
        return ans + island_total(grid, x + 1, y) + island_total(grid, x - 1, y) + island_total(grid, x, y + 1) + island_total(grid, x, y - 1);
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int ans = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                long long num = island_total(grid, i, j);

                if (num > 0 && num%k == 0)
                    ans++;
            }
        }
        return ans;
    }
};