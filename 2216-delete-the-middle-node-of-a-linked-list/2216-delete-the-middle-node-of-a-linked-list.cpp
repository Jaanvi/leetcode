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
    int len(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode* curr=head;
        ListNode* prev=NULL;
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        int mid=len(head)/2;
        int st=0;
        while(st<mid)
        {
            prev=curr;
            curr=curr->next;
            st++;
        }
        prev->next=curr->next;
        return head;
    }
};