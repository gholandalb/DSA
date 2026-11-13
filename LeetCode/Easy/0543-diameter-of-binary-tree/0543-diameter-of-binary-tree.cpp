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
    int ans = 0;
    int percorrer(TreeNode* root)
    {
        if (root == NULL)
            return 0;
        int esq = percorrer(root->left);
        int dir = percorrer(root->right);
        ans = max(ans, esq + dir);
        return 1 + max(esq, dir);

        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL)
            return 0;
        percorrer(root);
        
        return ans;
    }
};