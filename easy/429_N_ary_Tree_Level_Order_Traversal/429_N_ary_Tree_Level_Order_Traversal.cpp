/*
// Definition for a Node.
class Node {
public:
    int val = NULL;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (!root)  return {};
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        
        int cnt = 0;
        
        while (!q.empty()){
            int level_size = q.size();
            vector<int> level;
            
            for (int i = 0; i < level_size; i++){
                Node* front = q.front();
                q.pop();
                
                for (auto&i : front->children){
                    q.push(i);
                }
                
                level.push_back(front->val);
            }
          
            ans.push_back(level);
        }
        return ans;
    }
};