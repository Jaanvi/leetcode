/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode* reslist=new ListNode();
        ListNode* reshead=reslist;
        while(head1!=NULL && head2!=NULL)
        {
            if(head1->val<head2->val)
            {
                 reshead->next=new ListNode(head1->val);
                 head1=head1->next;
            }
            else if(head1->val>head2->val)
            {
                 reshead->next=new ListNode(head2->val);
                 head2=head2->next;
            }
            else if(head1->val==head2->val)
            {
                 reshead->next=new ListNode(head1->val);
                 head1=head1->next;
                 reshead=reshead->next;
                 reshead->next=new ListNode(head2->val);
                 head2=head2->next;
            }
            reshead = reshead->next; // Advance reshead
        }  
        while(head1!=NULL)
        {
             reshead->next=new ListNode(head1->val);
             head1=head1->next;
            reshead = reshead->next; // Advance reshead
        }  
         while(head2!=NULL)

        {
             reshead->next=new ListNode(head2->val);
             head2=head2->next;
             reshead = reshead->next; // Advance reshead
        } 
        return  reslist->next;
    }
};