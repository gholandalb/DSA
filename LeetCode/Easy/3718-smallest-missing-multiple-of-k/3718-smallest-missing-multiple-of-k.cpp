class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        int ans = -1;
        set<int> k_multiples;
        for (auto c : nums)
        {
            if (c%k == 0)
                k_multiples.insert(c);
        }
        for (int i = 1; i <= 101; i++)
        {
            if (k_multiples.count(i*k))
                continue;
            ans = k*i;
            break;
        }
        return ans;
    }
};