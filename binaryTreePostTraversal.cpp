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
    vector<int> postorderTraversal(TreeNode* root) {
        
        stack<TreeNode*>s1,s2;
        vector<int> ans;
        TreeNode *temp=NULL,*current=root;
        if(current==NULL)return ans;
        s1.push(current);
        while(!s1.empty()){
            temp=s1.top();
            s1.pop();
            if(temp)s2.push(temp);
            if(temp->left)s1.push(temp->left);
            if(temp->right)s1.push(temp->right);
        }
        
        while(!s2.empty()){
            temp=s2.top();
            ans.push_back(temp->val);
            s2.pop();
        }
        return ans;
        
    }
};