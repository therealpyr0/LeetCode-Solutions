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
    
    bool isrightsame(TreeNode* p, TreeNode* q){
        if(p->right==NULL and q->right==NULL)return true;
        if(p->right and q->right)if(p->right->val==q->right->val)return true;
        return false;
    }

        
    bool isleftsame(TreeNode* p, TreeNode* q){
        if(p->left==NULL and q->left==NULL)return true;
        if(p->left and q->left)if(p->left->val==q->left->val)return true;
        return false;
    }
    
        bool isvaluesame(TreeNode* p, TreeNode* q){
        if(p->val==q->val)return true;
        return false;
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL)return p==q;
        return p->val==q->val and isSameTree(p->right,q->right) and isSameTree(p->left,q->left);
    }

    
};