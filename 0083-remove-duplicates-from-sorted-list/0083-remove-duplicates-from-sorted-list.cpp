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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return head;
        if(head->next==nullptr) return head;
        ListNode *current=head;
        ListNode *future=current->next;
        while(future!=nullptr)
        {
            if(current->val==future->val)
            {
                future=future->next;
            }   
            else
            {
                current=current->next;
                current->val=future->val;
                future=future->next;
            }
        }
        current->next=nullptr;
        return head;
    }
};