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
void levelorder1(TreeNode *root, vector<vector<int>> &arr, queue<TreeNode *> &q)
{
    vector<int> brr;

    int size=q.size();

    for(int i=0;i<size;i++)
    {
        TreeNode *temp=q.front();
        q.pop();

        brr.push_back(temp->val);

        if(temp->left)
        {
            q.push(temp->left);
        }

        if(temp->right)
        {
            q.push(temp->right);
        }
    }
    arr.push_back(brr);
}

void levelorder2(TreeNode *root, vector<vector<int>> &arr, queue<TreeNode *> &q)
{
    int size = q.size();
    
    vector<int> brr;

    for(int i=0;i<size;i++)
    {
        TreeNode *temp=q.front();
        q.pop();

        brr.push_back(temp->val);

        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
    reverse(brr.begin(),brr.end());
    arr.push_back(brr);
}

int height(TreeNode *root)
{
    if(root==nullptr)
    {
        return 0;
    }

    int left=height(root->left);
    int right=height(root->right);

    return 1+max(left,right);
}
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        int h=height(root);

        vector<vector<int>> arr;

        queue<TreeNode *> q;

        q.push(root);

        for(int i=0;i<h;i++)
        {
            if(i%2==0)
            {
                levelorder1(q.front(),arr,q);
            }
            else
            {
                levelorder2(q.front(),arr,q);
            }
        }

        return arr;
    }
};