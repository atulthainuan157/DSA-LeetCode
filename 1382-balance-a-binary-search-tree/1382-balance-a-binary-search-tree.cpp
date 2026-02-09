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
    vector<int> vec;
    void makeVector(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        makeVector(root->left);
        vec.push_back(root->val);
        makeVector(root->right);
    }

    TreeNode* balanceTree(int st, int end) {
        if (st > end) {
            return NULL;
        }
        int mid = st + (end - st) / 2;

        TreeNode* root = new TreeNode(vec[mid]);

        root->left = balanceTree(st, mid - 1);
        root->right = balanceTree(mid + 1, end);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        makeVector(root);
        int n = vec.size();
        return balanceTree(0, n - 1);
    }
};