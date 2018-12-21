/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* ptr=NULL;
        ptr=head;
        while(ptr){
            s.push(ptr->val);
            ptr=ptr->next;
        }
        ptr=head;
        bool flag=true;
        while(ptr){
            if(ptr->val==s.top()){
                s.pop();
                ptr=ptr->next;
            }
            else{
                flag=false;
                break;
            }
        }
        return flag;
    }
};