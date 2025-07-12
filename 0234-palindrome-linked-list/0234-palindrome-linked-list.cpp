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
    bool isPalindrome(ListNode* head) 
    {
        int length=len(head);
        int temp=0;
        ListNode* curr=head;
        int size=length/2;
        vector<int>ans;
        int count=0;
        while(curr!=NULL && count<size)
        {
            count++;
           ans.push_back(curr->val);
           curr=curr->next;
        }
        if(length%2==1)
        {
            curr=curr->next;
        }
        for(int i=size-1;i>=0;i--)
        {
            if(curr==NULL || curr->val!=ans[i])
            {
                return false;
            }
            curr=curr->next;
        }
        return true;
    }
};