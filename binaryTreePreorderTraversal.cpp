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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        TreeNode *temp=NULL,*current=root;
        if(root==NULL)return ans;
        s.push(root);
        while(!s.empty()){
            temp=s.top();
            s.pop();
            ans.push_back(temp->val);
            if(temp->right!=NULL)s.push(temp->right);
            if(temp->left!=NULL)s.push(temp->left);
            
        }
        return ans;
    }
};