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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0,l2=0;
        ListNode *temp=headA;
        
        if(headA==NULL or headB==NULL){ temp=NULL;return temp;} 
        while(temp){
            l1++;
            temp=temp->next;
        }
        temp=headB;
        while(temp){
            l2++;
            temp=temp->next;
        }
        ListNode *ans1=headA,*ans2=headB,*ans;
        int k=0;
        if(l1>l2){k=l1-l2;
                  ans1=headA;
                  ans2=headB;
                 while(k){
                     ans1=ans1->next;
                     //ans2=ans2->next;
                     k--;
                 }
                 }
        if(l2>l1){k=l2-l1;
                  ans1=headA;
                  ans2=headB;
                 while(k){
                     //ans1=ans1->next;
                     ans2=ans2->next;
                     k--;
                 }
                 }
    //bool f=false;
    ans=NULL;
    while(ans1!=NULL and ans2!=NULL){
        if(ans1->val==ans2->val)return ans1;
        ans1=ans1->next;
        ans2=ans2->next;
    }    
    return ans;
    }
    
};