/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);   // enqueue the root
        while (!q.empty()){
            int childs = q.size();
            //cout << childs << endl;
            long int temp = 0;  // if declare as 'int', the case [2147483647,2147483647,2147483647] would be overflow
            for (int i = 0; i < childs; i++){
                TreeNode* t = q.front();
                q.pop();
                if (t->left)    q.push(t->left);
                if (t->right)   q.push(t->right);
                temp += t->val;
            }
            ans.push_back((double)temp / childs);  
        }
        return ans;
    }
};