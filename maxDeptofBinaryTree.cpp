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
    int maxDepth(TreeNode* root) {
        int h=height(root);
        return h;
    }
    
    int height(TreeNode* root){
        if(root==NULL)return 0;
        else return 1+max(height(root->left),height(root->right));
    }
};