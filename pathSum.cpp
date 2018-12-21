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
    bool ans =false;
    void preorder(TreeNode *root,int sum,int target){
        if(!root)return;
        sum+=root->val;
        if(sum==target && root->left==NULL && root->right==NULL)ans=true;
        preorder(root->left,sum,target);
        if(root->left==NULL and root->right==NULL)sum-=root->val;
        preorder(root->right,sum,target);
        return;
    }
    bool hasPathSum(TreeNode* root, int sum) {
        preorder(root,0,sum);
        return ans;
    }
};