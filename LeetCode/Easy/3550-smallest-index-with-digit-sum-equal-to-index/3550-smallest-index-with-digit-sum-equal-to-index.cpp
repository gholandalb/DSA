class Solution {
public:
    int smallestIndex(vector<int>& nums) 
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            string s = to_string(nums[i]);
            for (auto c : s)
                sum += c - '0';
            if (i == sum)
                return i;
        }
        return -1;
    }
};