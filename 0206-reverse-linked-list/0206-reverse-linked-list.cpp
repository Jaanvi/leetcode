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
    void rev(ListNode* &curr,ListNode* &prev)
    {
         if(curr==NULL)
         {
            return ;
         }
          
         ListNode* currnext=curr->next; 
         curr->next=prev;
         prev=curr;
         curr=currnext;
         rev(curr,prev);
    }
    ListNode* reverseList(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;
         rev(curr,prev);
        return prev;
    }
};