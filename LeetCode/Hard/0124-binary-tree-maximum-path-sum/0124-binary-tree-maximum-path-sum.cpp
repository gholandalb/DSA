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
    int ans = -10e5;

    void local_path_sum(TreeNode* root)
    {
        if (root->left != NULL)
            local_path_sum(root->left);
        if (root->right != NULL)
            local_path_sum(root->right);
        
        if (root == NULL)
            return;
        if (root->right == NULL && root->left == NULL)
        {
            ans = max(root->val, ans);
            return;
        }
        
        int esq, dir;
        if (root->left == NULL)
            esq = 0;
        else
            esq = root->left->val;
        if (root->right == NULL)
            dir = 0;
        else
            dir = root->right->val;




        ans = max(ans, root->val + esq + dir);
        root->val = max({root->val, root->val + esq, root->val + dir});
        ans = max(ans, root->val);
    }

    int maxPathSum(TreeNode* root) {
        local_path_sum(root);
        return ans;
    }
};