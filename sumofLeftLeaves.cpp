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
    int sum=0;
    void inorder(TreeNode* root,TreeNode* parent ){
        if(root==NULL)return;
        inorder(root->left,root);
        if(root->left==NULL and root->right==NULL){
            if(parent and parent->left==root)sum+=root->val;cout<<root->val<<endl;}
        inorder(root->right,root);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        inorder(root,NULL);
        return sum;
    }
};