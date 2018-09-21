/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// recursive
class Solution {
private:
    int add_value = 0;
public:
    TreeNode* convertBST(TreeNode* root) {  
        dfs (root);
        return root;
    }
    void dfs(TreeNode* root){
        if (!root)  return;
        
        if (root->right){
            dfs(root->right);
        }
        
        add_value += root->val;
        root->val = add_value;        
        
        if (root->left){
            dfs(root->left);
        }
        
    }
};


