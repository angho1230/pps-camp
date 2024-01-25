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
    TreeNode* increasingBST(TreeNode* root) {
        if(!root) return 0x0;
        queue<TreeNode *> q;
        trav(q, root);
        TreeNode * i = q.front();
        TreeNode * r = i;
        q.pop();
        while(!q.empty()){
            i->left = 0x0;
            i->right = q.front();
            i = i->right;
            q.pop();
        }
        i -> left = 0x0;
        return r;
    }
    void trav(queue<TreeNode *>& q, TreeNode* root){
        if(root->left) trav(q, root->left);
        q.push(root);
        if(root->right) trav(q, root->right); 
    }
};