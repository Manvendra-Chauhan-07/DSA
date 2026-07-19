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
        
        unordered_map<int,int> mpp;
        
        ListNode *traverse=head;
        while(traverse)
        {
            mpp[traverse->val]++;
            traverse=traverse->next;
        }

        ListNode *current=head;
        ListNode *temp=new ListNode(-1);
        ListNode *tail=temp;

        while(current)
        {
            if(mpp[current->val]==1)
            {
                tail->next=current;
                tail=tail->next;
                current=current->next;

            }
            else
            {
                current=current->next;
            }
        }
        tail->next=nullptr;
        return temp->next;
    }
};