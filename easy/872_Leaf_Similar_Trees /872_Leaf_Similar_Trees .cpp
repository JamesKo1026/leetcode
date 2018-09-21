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
     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1, arr2;
        DFS(root1, arr1);
        DFS(root2, arr2);
        return arr1 == arr2;
    }
    void DFS(TreeNode* root, vector<int>& arr){
        if (!root)
            return;
        if (!root->left && !root->right){   // if the node doesn't have both left and right childnode, it's a leaf.
            arr.push_back(root->val);
            return;
        }
        DFS(root->left, arr);
        DFS(root->right, arr);
    }  
};