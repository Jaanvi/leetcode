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
       ListNode* prev = NULL;
       ListNode* curr = head;
       while(curr != NULL) 
       {
          ListNode* next1 = curr->next;
          curr->next = prev;
          prev = curr;
          curr = next1; 
       }
       return prev;  
    }

    bool isPalindrome(ListNode* head) 
    {
         ListNode* fast=head;
          ListNode* slow=head;
          while(fast!=NULL && fast->next)
          {
             slow=slow->next;
             fast=fast->next->next;
          }
          ListNode* rever = reverse(slow);
       while(head != NULL && rever != NULL)
       {
          if(head->val != rever->val)
          {
             return false; 
          }
          head = head->next; 
          rever = rever->next; 

       }  
       return true; 
    }
};
