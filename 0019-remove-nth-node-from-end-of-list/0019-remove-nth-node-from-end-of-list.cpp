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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr) return head;
        if(n==1&&head->next==nullptr) return nullptr;

        int count=0;
        ListNode *current=head;
        while(current!=nullptr)
        {
            count++;
            current=current->next;
        }
        count=count-n;

        if(count==0)
        {
            ListNode *temp=head;
            head=head->next;
            delete temp;
            return head;
        }

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