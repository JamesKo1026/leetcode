/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// non-recursive
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> stk;
        stk.push(root);
        
        while (!stk.empty()){
            TreeNode* temp = stk.top();
            stk.pop();
            if (temp){
                stk.push(temp->right);
                stk.push(temp->left);
                swap(temp->left, temp->right);
            }
            
        }
        return root;
    }
};

/*
// recursive (easier)
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root){
            invertTree(root->left);
            invertTree(root->right);
            swap(root->left, root->right);
        }
        return root;
    }
};
*/