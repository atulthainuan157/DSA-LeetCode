/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isBST(TreeNode* root, TreeNode* small, TreeNode* large) {
        if (root == NULL) {
            return true;
        }
        if (small != NULL && root->val <= small->val) {
            return false;
        }
        if (large != NULL && root->val >= large->val) {
            return false;
        }
        return isBST(root->left, small, root) &&
               isBST(root->right, root, large);
    }

    bool isValidBST(TreeNode* root) {
        return isBST(root, NULL, NULL);
        }
};