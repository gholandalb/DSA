class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int max_num = nums[0];
        for (int i = 0; i < n; i++)
        {
            max_num = max(max_num, nums[i]);
            if (max_num - *min_element(nums.begin() + i, nums.end()) <= k)
            {
                return i;
            }
        }
        return -1;
    }
};