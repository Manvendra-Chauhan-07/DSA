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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==nullptr) return nullptr;

        while(head!=nullptr && head->val==val)
        {
            head=head->next;
        }
        if(head==nullptr) return head;

        ListNode *current=head->next;
        ListNode *previous=head;

        while(current!=nullptr )
        {
            if(current->val==val)
            {
                previous->next=current->next;
                delete current;
                current=previous->next;
            }
            else
            {
                previous=current;
                current=current->next;
            }
        }
        return head;
    }
};