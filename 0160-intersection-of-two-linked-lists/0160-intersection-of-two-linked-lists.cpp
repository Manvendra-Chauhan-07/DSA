/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==nullptr || headB==nullptr ) return nullptr;

        int length1=0,length2=0;
        ListNode *Node1=headA;
        ListNode *Node2=headB;
        while(Node1!=nullptr)
        {
            length1++;
            Node1=Node1->next;
        }
        while(Node2!=nullptr)
        {
            length2++;
            Node2=Node2->next;
        }

        // if(length1==1&&length2==1) return headA;

        Node1=headA;
        Node2=headB;

        if(length1>length2)
        {
            int count=length1-length2;
            for(int i=1;i<=count;i++)
            {
                Node1=Node1->next;
            }
        }     
        else
        {
            int count=length2-length1;
            for(int i=1;i<=count;i++)
            {
                Node2=Node2->next;
            }
        }
        while(Node1!=nullptr&&Node2!=nullptr)
        {
            if(Node1==Node2)
            {
                return Node1;
            }
            Node1=Node1->next;
            Node2=Node2->next;
        }
        return nullptr;
    }
};