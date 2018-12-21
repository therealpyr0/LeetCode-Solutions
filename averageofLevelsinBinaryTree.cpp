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
    vector<double> averageOfLevels(TreeNode* root) {
        int elements=0;
        TreeNode *temp;
        vector<double> ans;
        double sum;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            temp=q.front();
            q.pop();
            if(temp==NULL){
                if(elements>0){double avg=(sum)/elements;
                ans.push_back(avg);
                 q.push(NULL);}
                elements=0;
                sum=0;

            }
            else{
                elements++;
                sum+=temp->val;
                if(temp->right!=NULL)q.push(temp->right);
                if(temp->left!=NULL)q.push(temp->left);
            }
        }
    return ans;
    }
};