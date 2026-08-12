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

int preorder(TreeNode *root, int &value)
{
    if(root==nullptr)
    {
        return 0;
    }

    int left=preorder(root->left,value);
    int right=preorder(root->right,value);

    if(abs(left-right)>1)
    {
        value=0;
    }

    return 1+max(left,right);
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {

        int value=1;

        preorder(root,value);

        return value;
        
    }
};