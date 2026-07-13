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
    ListNode* oddEvenList(ListNode* head) {

        if(head==nullptr) return head;
        if(head->next==nullptr) return head;
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *temp=head->next;
        while(even!=nullptr&&even->next!=nullptr)
        {
            odd->next=even->next;
            odd=even->next;

            even->next=odd->next;
            even=odd->next;
        }
        odd->next=temp;
        return head;
    }
};