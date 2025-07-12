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
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL)
        {
            ListNode* currnext=curr->next;
            curr->next=prev;
            prev=curr;
            curr=currnext;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) 
    {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* rev=reverse(slow);
        while(head!=NULL && rev!=NULL)
        {
            if(head->val!=rev->val)
            {
                return false;
            }
            head=head->next;
            rev=rev->next;
        }
        return true;
    }
};