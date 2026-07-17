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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1==nullptr && list2==nullptr) return nullptr;

        if(list1==nullptr && list2!=nullptr) return list2;

        if(list1!=nullptr && list2==nullptr) return list1;

        ListNode *tail1=list1;
        ListNode *tail2=list2;

        ListNode *temp=new ListNode(-1);
        ListNode *tailtemp=temp;

        while(tail1!=nullptr && tail2!=nullptr)
        {
            if(tail1->val==tail2->val)
            {
                tailtemp->next=new ListNode(tail1->val);
                tail1=tail1->next;
                tailtemp=tailtemp->next;
            }
            else if(tail2->val<tail1->val)
            {
                tailtemp->next=new ListNode(tail2->val);
                tail2=tail2->next;
                tailtemp=tailtemp->next;
            }
            else
            {
                tailtemp->next=new ListNode(tail1->val);
                tail1=tail1->next;
                tailtemp=tailtemp->next;
            }
        }
        if(tail2!=nullptr)
        {
            tailtemp->next=tail2;
        }
        else
        {
            tailtemp->next=tail1;
        }
        
        return temp->next;
    }
};