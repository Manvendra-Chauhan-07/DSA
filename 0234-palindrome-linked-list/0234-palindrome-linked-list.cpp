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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr) return true;
        if(head->next==nullptr) return true;


        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=nullptr&&fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *current=head;
        while(current->next!=slow)
        {
            current=current->next;
        }
        current->next=nullptr;
        ListNode *previous=nullptr;
        ListNode *future=nullptr;
        current=slow;
        while(current!=nullptr)
        {
            future=current->next;
            current->next=previous;
            previous=current;
            current=future;
        }
        while(head!=nullptr&&previous!=nullptr)
        {
            if(head->val!=previous->val)
            {
                return false;
            }
            head=head->next;
            previous=previous->next;
        }
        return true;
    }
};