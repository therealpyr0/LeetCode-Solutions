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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int digit1=0,digit2=0,reversedsum=0,carry=0,asum=0,tempval=0;
        struct ListNode* head1=l1;
        struct ListNode* head2=l2;
        struct ListNode* anshead=NULL,*temp=NULL;
        while(head1!=NULL || head2!=NULL){
            if(head1!=NULL){
                digit1=head1->val;
                head1=head1->next;
            }
            else{
                digit1=0;
            }
            if(head2!=NULL){
                digit2=head2->val;
                head2=head2->next;
            }
            else{
                digit2=0;
            }
            asum=digit1+digit2+carry;
            
            if(asum>=10){
                tempval=(asum%10);
                carry=asum/10;
            }
            else{
                tempval=(asum%10);
                carry=0;
            }
            if(anshead==NULL){
                struct ListNode* t=(struct ListNode* )malloc(sizeof(struct ListNode));
                t->next=NULL;
                t->val=tempval;
                temp=t;
                anshead=t;
            }
            else{
                struct ListNode* t=(struct ListNode*)malloc(sizeof(struct ListNode));
                t->val=tempval;
                t->next=NULL;
                temp->next=t;
                temp=temp->next;
            }
            
        
        }
        if(carry!=0)
        {
                struct ListNode* t=(struct ListNode*)malloc(sizeof(struct ListNode));
                t->val=carry;
                t->next=NULL;
                temp->next=t;
                temp=temp->next;
            
        }
        //cout<<head1->val;
        return anshead;
    }
};