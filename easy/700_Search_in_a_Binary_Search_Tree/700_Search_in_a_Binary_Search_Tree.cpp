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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root)  return {};
        stack<TreeNode*> stk;
        stk.push(root);
        while (!stk.empty()){
            TreeNode* top = stk.top();
            stk.pop();     
            if (top && top->val == val){
                return top;
            }
            else if (top){
                stk.push(top->right);
                stk.push(top->left);    
            }
        }
        return {};
    }
};