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
    void total(TreeNode* root, int sum, int& totalSum) {
        if (!root) {
            return;
        }
        sum = (sum << 1) | root->val;
        if (!root->left && !root->right) {
            totalSum += sum;
            return;
        }
        total(root->left, sum, totalSum);
        total(root->right, sum, totalSum);
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        int totalSum = 0;
        total(root, sum, totalSum);
        return totalSum;
    }
};