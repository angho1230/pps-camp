/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(!root) return v;
        stack<TreeNode *> s;
        TreeNode * n = root;
        while(true){
            if(n){
                s.push(n);
                n = n->left;
                continue;
            }
            if(s.empty()) break;
            n = s.top();
            s.pop();
            v.push_back(n->val);
           n = n->right;
        }
        return v;
    }
    //Follow up: Recursive solution is trivial, could you do it iteratively?

};
