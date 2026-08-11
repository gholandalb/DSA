class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int n = nums.size();
        int l = 0, r = 0, zeros = 0;
        int sum = 0, ans = 0;
        while (r < n)
        {
            if (nums[r] == 1)
            {
                sum++;
                ans = max(sum, ans);
            }
            else
            {
                sum++;
                zeros++;
            }
            if (zeros <= 1)
                ans = max(sum, ans);
            while (zeros > 1)
            {
                if (nums[l] == 0)
                    zeros--;
                sum--;
                l++;
            }
            ans = max(sum, ans);
            r++;
        }
        if (ans <= 0)
            return 0;
        return ans - 1;
    }
};