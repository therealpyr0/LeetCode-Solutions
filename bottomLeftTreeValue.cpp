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

    int findBottomLeftValue(TreeNode* root) {
        bool flag=false;
        queue<TreeNode*> q;
        TreeNode* ptr;
        int ans=0,count=0;
        q.push(root);
        ans=root->val;
        q.push(NULL);
        while(!q.empty()){
            ptr=q.front();
            q.pop();
            if(ptr==NULL){
                
                flag=true;
                if(count>0)q.push(NULL);
                count=0;
                continue;
                         }
            if(flag){flag=false;ans=ptr->val;cout<<ans<<endl;}
            if(ptr->left){q.push(ptr->left);count++;}
            if(ptr->right){q.push(ptr->right);count++;}
        }
    return ans;
    }
};