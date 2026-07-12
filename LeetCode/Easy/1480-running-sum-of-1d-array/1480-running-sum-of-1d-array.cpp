class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int n = 0;
        vector<int> v;
        for (int c : nums)
        {
            n += c;
            v.push_back(n);
        }
        return v;
    }
};