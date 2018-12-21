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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        TreeNode* current=NULL,*temp=NULL;
        bool done=false;
        current=root;
        while(!done){
            if(current!=NULL){
                s.push(current);
                current=current->left;
            }
            else{
                if(!s.empty()){
                    temp=s.top();
                    current=temp->right;
                    ans.push_back(temp->val);
                    s.pop();
                }
                else done=true;
            }
            
        }
    return ans;
    }
};