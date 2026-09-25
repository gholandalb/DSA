class Solution {
public:

    int binary_search_recursive(vector<int>& nums, int target, int l, int r)
    {
        int meio = (r - l)/2 + l;
        if (l > r)
            return -1;
        if (nums[meio] == target)
            return meio;
        if (nums[meio] < nums[r])
        {
            if (target > nums[meio] && target <= nums[r])
                return binary_search_recursive(nums, target, meio + 1, r);
            else 
                return binary_search_recursive(nums, target, l, meio - 1);
        }
        else 
        {
            if (target < nums[meio] && target >= nums[l])
                return binary_search_recursive(nums, target, l, meio - 1);
            else 
                return binary_search_recursive(nums, target, meio + 1, r);
        }
    }

    int search(vector<int>& nums, int target) 
    {
        return binary_search_recursive(nums, target, 0, nums.size() - 1);
    }
};