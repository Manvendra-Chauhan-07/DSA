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

void levelorder(TreeNode *root, vector<int> &arr)
{
    if(root==nullptr)
    {
        return;
    }

    queue<TreeNode *>q;

    q.push(root);

    while(!q.empty())
    {
        int mini=INT_MIN;

        int n=q.size();

        for(int i=0;i<n;i++)
        {
            TreeNode *temp=q.front();
            q.pop();

            if((temp->val)>mini)
            {
                mini=temp->val;
            }

            if(temp->left)
            {
                q.push(temp->left);
            }

            if(temp->right)
            {
                q.push(temp->right);
            }
        }

        arr.push_back(mini);
    }
}

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        
        vector<int> arr;

        levelorder(root,arr);

        return arr;
    }
};