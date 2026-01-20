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
    int ans = 0;
    int treeHeight(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int leftHeight = treeHeight(root->left);
        int rightHeight = treeHeight(root->right);

        ans = max(leftHeight + rightHeight, ans);
        return max(leftHeight, rightHeight) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        treeHeight(root);

        return ans;;
    }
};