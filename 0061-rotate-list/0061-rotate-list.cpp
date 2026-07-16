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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==nullptr) return head;
        if(head->next==nullptr) return head;

        if(k==0) return head;

        ListNode *current=head;
        ListNode *previous=nullptr;

        int count=0;
        ListNode *temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }

        k=k%count;
        if(k==0) return head;

        int pos=count-k;
        
        for(int i=1;i<=pos;i++)
        {
            previous=current;
            current=current->next;
        }
        previous->next=nullptr;

        ListNode *temp1=current;

        while(temp1->next!=nullptr)
        {
            temp1=temp1->next;
        }

        temp1->next=head;

        return current;
    }
};