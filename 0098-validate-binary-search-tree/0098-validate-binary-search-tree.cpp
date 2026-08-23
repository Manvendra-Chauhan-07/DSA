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

void myInorder(TreeNode *root, vector<int> &arr)
{
    if(root==nullptr)
    {
        return;
    }

    myInorder(root->left,arr);
    arr.push_back(root->val);
    myInorder(root->right,arr);    
}
class Solution {
public:
    bool isValidBST(TreeNode* root) {

        vector<int> arr;

        myInorder(root,arr);

        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]<=arr[i-1])
            {
                return false;
            }
        }
        return true;
    }
};