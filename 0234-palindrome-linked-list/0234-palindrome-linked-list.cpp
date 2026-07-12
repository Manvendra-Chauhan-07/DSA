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
        vector<int> arr;
        ListNode *current=head;
        while(current!=nullptr)
        {
            arr.push_back(current->val);
            current=current->next;
        }
        int start=0,end=arr.size()-1;
        while(start<end)
        {
            if(arr[start]!=arr[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};