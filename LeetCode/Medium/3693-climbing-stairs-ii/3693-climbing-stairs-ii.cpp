class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n + 1, 0);
        dp[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i - 1 == 0)
                dp[i] = costs[i - 1] + 1;
            else if (i - 2 == 0)
                dp[i] = min(costs[i -1] + 1 + dp[i - 1], costs[i - 1] + 4);
            else
                dp[i] = min(costs[i -1] + 1 + dp[i - 1], min(costs[i - 1] + 4 + dp[i - 2], costs[i - 1] + 9 + dp[i - 3]));
        }
        return dp[n];
    }
};


