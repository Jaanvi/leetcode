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
    ListNode* sortList(ListNode* head) 
    {
        ListNode* curr=head;
        vector<int>ans;
        while(curr!=NULL)
        {
           ans.push_back(curr->val);
           curr=curr->next;
        }
        sort(ans.begin(),ans.end());
        ListNode* temp=head;
        int i=0;
        while(temp!=NULL)
        {
            temp->val=ans[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};