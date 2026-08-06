/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 bool preorder(TreeNode *p, TreeNode *q)
 {

    if(p==nullptr && q==nullptr )
    {
        return true;
    }


    if(p==nullptr || q==nullptr)
    {
        return false;
    }


    if((p->val!=q->val))
    {
        return 0;
    }

    return preorder(p->left,q->left) && preorder(p->right,q->right);



 }
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        bool var=preorder(p,q);

        return var;
    }
};