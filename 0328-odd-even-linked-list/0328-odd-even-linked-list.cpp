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
    ListNode* oddEvenList(ListNode* head) 
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
       ListNode* fastodd=head;
       ListNode* fasteven=head->next;
       ListNode* temp=fasteven;
       while(fasteven!=NULL  && fasteven->next!=NULL)
       {
           fastodd->next=fasteven->next;
           fastodd=fastodd->next;
           fasteven->next=fastodd->next;
           fasteven=fasteven->next;
       }   
       fastodd->next=temp;
       return head;
    }
};