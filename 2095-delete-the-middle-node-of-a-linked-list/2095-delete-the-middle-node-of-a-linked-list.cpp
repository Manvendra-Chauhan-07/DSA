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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr) return head;
        if(head->next==nullptr) return nullptr;

        ListNode *current=head;
        int count=0;
        while(current!=nullptr)
        {
            count++;
            current=current->next;
        }
        count/=2;
        current=head;
        ListNode *previous=nullptr;
        for(int i=1;i<=count;i++)
        {
            previous=current;
            current=current->next;
        }
        previous->next=current->next;
        delete current;

        return head;
    }
};