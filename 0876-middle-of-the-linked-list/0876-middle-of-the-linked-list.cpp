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
        int count =0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }  
        return count;
    }    
    ListNode* middleNode(ListNode* head) 
    {
        // ListNode* res=new ListNode();
        int len=length(head);
        int mid=(len/2);
        ListNode* temp=head;
        int count=0;
        while(count!=mid)
        {
            temp=temp->next;
            count++;
        }
        // while(temp!=NULL)
        // {
        //     res->val=temp->val;
        //     res->next=temp->next;
        //     temp=temp->next;
        // } 
        return temp;
    }
};