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

    void postOrder(TreeNode* root) {
        if (root != nullptr) {
            postOrder(root->left);
            postOrder(root->right);
            answ.push_back(root->val);
        }
    } 
    
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return answ;
    }
};