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
class Solution 
{
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
        int delindex=len-n+1;
        ListNode* curr=head;
        ListNode* prev=NULL;
        int count=1;   
        while(count!=delindex &&curr->next!=NULL)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        if(prev==NULL)
        {
            return head=curr->next;
        }    
        prev->next=curr->next;
        return head;
    }
};