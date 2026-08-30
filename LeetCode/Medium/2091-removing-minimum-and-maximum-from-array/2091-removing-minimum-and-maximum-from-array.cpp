class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int i_max = max_element(nums.begin(), nums.end()) - nums.begin();
        int i_min = min_element(nums.begin(), nums.end()) - nums.begin();
        int n = nums.size();
        vector<int> possible_ans;
        possible_ans.push_back(max(i_max, i_min) + 1);
        possible_ans.push_back(max(n - i_max, n - i_min));
        possible_ans.push_back(n - i_max + i_min + 1);
        possible_ans.push_back(n - i_min + i_max + 1);
        return *min_element(possible_ans.begin(), possible_ans.end());
    }
};