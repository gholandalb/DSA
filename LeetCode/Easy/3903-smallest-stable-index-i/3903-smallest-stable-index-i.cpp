class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int max_num = nums[0];
        vector<int> smallest_num(n);
        smallest_num[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            smallest_num[i] = min(smallest_num[i + 1], nums[i]);
        }
        for (int i = 0; i < n; i++)
        {
            max_num = max(max_num, nums[i]);
            if (max_num - smallest_num[i] <= k)
            {
                return i;
            }
        }
        return -1;
    }
};