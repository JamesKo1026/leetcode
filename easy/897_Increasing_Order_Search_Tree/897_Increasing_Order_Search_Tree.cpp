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
    TreeNode* increasingBST(TreeNode* root, TreeNode* lastNode = NULL) {
        if (!root)  return lastNode;
        
        TreeNode* ans = increasingBST(root->left, root);
        cout << ans->val << endl;
        root->left = NULL;
        //cout << "***" << endl;
        //cout << ans->val << endl;
        //cout << temp->val << endl;
        root->right = increasingBST(root->right, lastNode);
        
        return ans;
    }
};