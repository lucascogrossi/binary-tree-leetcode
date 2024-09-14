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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> answ;

        queue<TreeNode*>q;
        int qLen;

        if (root != nullptr)
            q.push(root);

        while (!q.empty()) {
            vector<int> temp;
            qLen = q.size();

            for (int i = 0; i < qLen; ++i) {
                TreeNode *cur = q.front();
                q.pop();
                temp.push_back(cur->val);

                if (cur->left != nullptr)
                    q.push(cur->left);
                if (cur->right != nullptr)
                    q.push(cur->right);
            }
            answ.push_back(temp);
        }
        reverse(answ.begin(), answ.end());
        return answ;
    }
};