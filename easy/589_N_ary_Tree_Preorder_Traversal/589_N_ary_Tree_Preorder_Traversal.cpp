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
// recursive version
/*
class Solution {
public:
    vector<int> preorder(Node* root) {
        if (!root)  return {};
        vector<int> ans;
        ans.push_back(root->val);
        
        for (auto&i : root->children){
            vector<int> temp = preorder(i);
            ans.insert(ans.end(), temp.begin(), temp.end());    // append all return value behind the vector ans
        }
        
        
        return ans;
    }
};
*/

// iteration version
class Solution {
public:
    vector<int> preorder(Node* root) {
        if (!root)  return {};
        vector<int> ans;
        stack<Node*> stk;
        stk.push(root);
        while (!stk.empty()){
            Node* top = stk.top();
            stk.pop();
            for (int i = top->children.size()-1; i >= 0; i--)
                stk.push(top->children[i]);
            ans.push_back(top->val);
        }
        return ans;
    }
};
