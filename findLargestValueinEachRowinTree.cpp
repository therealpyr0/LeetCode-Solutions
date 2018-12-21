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
    vector<int> largestValues(TreeNode* root) {
        
        queue<TreeNode*> q1,q2;
        int curmax=0;
        TreeNode* temp;
        vector<int> ans;
        if(root==NULL)return ans;
        q1.push(root);
        while(1){
            bool use=false;
            curmax=INT_MIN;
            
            while(!q1.empty()){
                
            temp=q1.front();
                q1.pop();
            if(temp->val>=curmax){
               // cout<<temp->val<<endl;
                curmax=temp->val;
                use=true;
            }
            if(temp->right!=NULL)q2.push(temp->right);
            if(temp->left!=NULL)q2.push(temp->left);
            }
            if(use){cout<<"q1  : "<<curmax<<endl;ans.push_back(curmax);}
            curmax=INT_MIN;
            use=false;
            while(!q2.empty()){
                //cout<<temp->val<<endl;
                temp=q2.front();
                q2.pop();
                if(temp->val>=curmax){
                    //cout<<temp->val<<endl;
                    //ans.push_back(temp->val);
                    use=true;
                    curmax=temp->val;
                }
                if(temp->right!=NULL)q1.push(temp->right);
                if(temp->left!=NULL)q1.push(temp->left);
            }
            if(use){cout<<"q2  : "<<curmax<<endl;ans.push_back(curmax);}
            if(q1.empty() and q2.empty())break;
        }
    return ans;
    }
};