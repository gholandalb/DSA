class Solution {
public:

    int searchInsert(vector<int>& nums, int target) 
    {
        auto a = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (a + nums.begin() == nums.end())
        {
            if (target < nums.front())
                return 0;
            else if (target > nums.back())
                return nums.size();
        }
        else
            return a;
        return 0;
    }
};