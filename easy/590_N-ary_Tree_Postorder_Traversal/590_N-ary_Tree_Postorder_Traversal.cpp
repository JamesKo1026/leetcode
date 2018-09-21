/*
// Definition for a Node.
class Node {
public:
    int val;
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
    vector<int> postorder(Node* root) {
        if(!root)   return {};
        vector<int> ans;
        stack<Node*> bfs;
        bfs.push(root);
        while (!bfs.empty()){
            Node* temp = bfs.top();
            // cout << bfs.top() << endl;
            bfs.pop();
            // for (int i = 0; i < temp->children.size(); i++) bfs.push(temp->children[i]);
            for (auto&i : temp->children){
                bfs.push(i);
            }
            ans.push_back(temp->val);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};