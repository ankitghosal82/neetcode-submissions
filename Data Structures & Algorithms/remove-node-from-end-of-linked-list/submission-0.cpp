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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* temp=head;
        int c=0;
        while(temp)
        {
            c++;
            temp=temp->next;
        }
        if(c==n)
        {
            ListNode* x=head->next;
            delete head;
            return x;
        }
        temp=head;
        for(int i=1;i<c-n;i++)
        {
            temp=temp->next;
        }
        ListNode* t=temp->next;
        temp->next=temp->next->next;
        delete t;
        return head;
    }
};
