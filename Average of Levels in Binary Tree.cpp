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
    vector<double> averageOfLevels(TreeNode* root) {
        
	queue<TreeNode*> q;
    vector<double>answ;

    if (root == nullptr)
        return answ;

	q.push(root);
	int qLen;

	while (!q.empty()){
		qLen = q.size();
        double sum = 0.0;

		for (int i = 0; i < qLen; ++i) {
			TreeNode *node = q.front();
			q.pop();       
            sum += node->val;
    
			if (node->left != nullptr)
				q.push(node->left);
			if (node->right != nullptr)
				q.push(node->right);
		    }
            answ.push_back(sum / qLen); 
	    }
        return answ;
        
    }

};