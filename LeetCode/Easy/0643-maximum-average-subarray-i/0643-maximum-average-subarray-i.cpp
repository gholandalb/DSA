class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double now = 0, ans = -1e9;
        int l = 0;
        for (int r = 0; r < nums.size(); r++)
        {
            now += nums[r];
            if (r - l + 1 == k)
            {
                ans = max(now, ans);
                now -= nums[l];
                l++;
            }
        }
        return ans/k;
    }
};