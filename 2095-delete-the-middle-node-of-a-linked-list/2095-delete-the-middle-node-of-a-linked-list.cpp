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

        if(head->next==nullptr)
        {
            return nullptr;
        }

        int count=0;
        ListNode *traverse = head;
        while(traverse)
        {
            count++;
            traverse=traverse->next;
        }

        count=count/2;

        ListNode *current=head;
        ListNode *previous=nullptr;

        while(count--)
        {
            previous=current;
            current=current->next;

        }

        previous->next=current->next;

        return head;

        
    }
};