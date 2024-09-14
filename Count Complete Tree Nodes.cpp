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

    vector<int> answ;

    void inOrder(TreeNode *root) {
        if (root != nullptr) {
            inOrder(root->left);
            answ.push_back(root->val);
            inOrder(root->right);
        }
    }
    int countNodes(TreeNode* root) {
        inOrder(root);
        return answ.size();
    }
};