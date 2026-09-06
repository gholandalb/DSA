class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        long long n = coins.size();
        vector<long long> dp(amount + 1, 1e18);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++)
        {
            for (auto c : coins)
            {
                if (i - c < 0)
                    continue;
                else if (i - c >= 0 && dp[i - c] != 1e18)
                {
                    dp[i] = min(1 + dp[i - c], dp[i]);
                }
            }
        }
        if (dp[amount] == 1e18)
            return -1;
        return dp[amount];
    }
};