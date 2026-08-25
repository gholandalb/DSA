class Solution {
public:

    void erase_province(vector<vector<int>>& isConnected, int a, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (isConnected[a][i] == 1)
            {
                isConnected[a][i] = 0;
                isConnected[i][a] = 0;
                erase_province(isConnected, i, n);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int ans = 0;
        int n = isConnected.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (isConnected[i][j] == 1)
                {
                    isConnected[i][j] = 0;
                    isConnected[j][i] = 0;
                    ans++;
                    erase_province(isConnected, i, n);
                    erase_province(isConnected, j, n);
                }
            }
        }
        return ans;
        
    }
};