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
private:
    TreeNode* flatTree(TreeNode *root) {
        if(!root->left && !root->right) return root;
        if(!root->right) {
            root->right = root->left;
            root->left = NULL;
            return flatTree(root->right);
        }
        if(!root->left) return flatTree(root->right);
        TreeNode* oldRight = root->right;
        root->right = root->left;
        (flatTree(root->right))->right = oldRight;
        root->left = NULL;
        return flatTree(root->right);
    }
public:
    void flatten(TreeNode *root) {
        if(!root) return;
        flatTree(root);
    }
};