class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        vector<int> sum;
        for (int i = 0; i < accounts.size(); i++)
        {
            int p_sum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                p_sum += accounts[i][j];
            }
            sum.push_back(p_sum);
        }
        return *max_element(sum.begin(), sum.end());
    }
};