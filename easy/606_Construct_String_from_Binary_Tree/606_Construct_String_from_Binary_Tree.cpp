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
    string tree2str(TreeNode* t) {
        if (!t) return {};
        string ans;
        
        ans += to_string(t->val);
        
        if (t->left){
            ans += '(';
            ans += tree2str(t->left);
            ans += ')';
        } else if (t->right)
            ans += "()";
        
        if (t->right){
            ans += '(';
            ans += tree2str(t->right);
            ans += ')';
        }
        return ans;
    }
    
};