/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    void traversal(vector<int>& ans, Node* node){
        if (node == nullptr) {
            return;
        }
        
        ans.push_back(node->val);
        for (auto child : node->children) {
            traversal(ans, child);
        }
    }
    vector<int> preorder(Node* root) {
        Node* iter = root;
        vector<int> ans;
        traversal(ans, iter);
        return ans;
    }
};