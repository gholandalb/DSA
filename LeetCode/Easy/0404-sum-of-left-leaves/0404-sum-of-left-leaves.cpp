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

    int solve(TreeNode* node, bool is_left)
    {
        if (is_left && node->left == NULL && node->right == NULL)
            return node->val;
        else 
        {
            if (node->left == NULL && node->right == NULL)
                return 0;
            else if (node->left != NULL && node->right != NULL)
                return solve(node->left, true) + solve(node->right, false);
            else if (node->left == NULL && node->right != NULL)
                return solve(node->right, false);
            else if (node->left != NULL && node->right == NULL)
                return solve(node->left, true);
        }
        return 0;
    }   

    int sumOfLeftLeaves(TreeNode* root)
    {
        return solve(root, false);
    }
};