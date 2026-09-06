/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool solve(TreeNode* current, int targetSum, int sum)
    {
        if (current == nullptr)
            return false;
        if (current->left == nullptr && current->right == nullptr)
        {
            if (sum + current->val == targetSum)
                return true;
            else
                return false;
        }
        else if (current->left == nullptr)
            return solve(current->right, targetSum, sum + current->val);
        else if (current->right == nullptr)
            return solve(current->left, targetSum, sum + current->val);
        else
            return (solve(current->left, targetSum, sum + current->val) || solve(current->right, targetSum, sum + current->val));
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root, targetSum, 0);
    }
};