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
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode *temp,*ptr;
        s.push(root);
        if(root==NULL)return NULL;
        //s.push(NULL);
        while(!s.empty()){
            temp=s.top();
            s.pop();
            ptr=temp->right;
            temp->right=temp->left;
            temp->left=ptr;
            if(temp->left)s.push(temp->left);
            if(temp->right)s.push(temp->right);
            
        }
    return root;
    }
};