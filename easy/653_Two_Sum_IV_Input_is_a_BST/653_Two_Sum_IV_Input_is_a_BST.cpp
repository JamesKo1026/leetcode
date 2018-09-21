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
    bool findTarget(TreeNode* root, int k) {
        if (!root)  return false;
        stack<TreeNode*> stk;
        stk.push(root);
        vector<int> nums;
        while (!stk.empty()){
            TreeNode* top = stk.top();
            stk.pop();
            if (top->right) stk.push(top->right);
            if (top->left) stk.push(top->left);
            nums.push_back(top->val);
        }
        
        map<int, int> m;    // hash table solution
        for (int i = 0; i < nums.size(); i++){
            int numToFind = k - nums[i];
            
            if (m.find(numToFind) != m.end())   return true;
            m[nums[i]] = i;
        }
        return false;
    }
};