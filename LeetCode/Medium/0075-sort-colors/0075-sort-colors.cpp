class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        long long zeros = 0, ones = 0, twos = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                zeros++;
            else if (nums[i] == 1)
                ones++;
            else
                twos++;
        }
        nums.erase(nums.begin(), nums.end());
        for (int i = 0; i < zeros; i++)
            nums.push_back(0);
        for (int i = 0; i < ones; i++)
            nums.push_back(1);
        for (int i = 0; i < twos; i++)
            nums.push_back(2);
        
    }
};