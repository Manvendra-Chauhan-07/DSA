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

        int count=0;
        ListNode *current=head;
        while(current!=nullptr)
        {
            count++;
            current=current->next;
        }

        if(count==k) return head;
        k=k%count;
        if(k==0) return head;
        count=count-k;
        
        ListNode *pre=nullptr;
        current=head;
        for(int i=1;i<=count;i++)
        {
            pre=current;
            current=current->next;
        }
        pre->next=nullptr;
        ListNode *tail=current;
        while(tail->next!=nullptr)
        {
            tail=tail->next;
        }
        tail->next=head;
        head=current;
        return head;
    }
};