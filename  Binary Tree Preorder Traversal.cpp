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

    void preorderTraversalFunc(TreeNode *T) {
        if (T != nullptr) {
            answ.push_back(T->val);
            preorderTraversal(T->left);
            preorderTraversal(T->right);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        preorderTraversalFunc(root);
        return answ;
    }
};