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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> s;
        for(auto val : nums)
        {
            s.insert(val);
        } 

        ListNode *temp=new ListNode(-1);
        ListNode *tail=temp;
        ListNode *current=head;

        while(current!=nullptr)
        {
            ListNode *future=current->next;
            if(s.find(current->val)==s.end())
            {
                tail->next=current;
                tail=tail->next;

            }
            else
            {
                current->next=nullptr;
            }
            current=future;
        }
        tail->next=nullptr;
        
        return temp->next;
        
    }
};