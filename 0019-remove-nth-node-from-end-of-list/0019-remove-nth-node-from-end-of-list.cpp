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
    int length(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int len=length(head);
        int del=len-n;
        if (del == 0)
        {
            return head->next;
        }
        int count=0;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(count<del)
        {
           count++;
           prev=curr;
           curr=curr->next; 
        }
        prev->next=curr->next;
        return head;
    }
};