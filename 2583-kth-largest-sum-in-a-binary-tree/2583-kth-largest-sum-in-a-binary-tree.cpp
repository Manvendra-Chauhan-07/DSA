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
    queue<TreeNode *> q;
    q.push(root);
    int sum=0;

    while(!q.empty())
    {
        int n=q.size();
        sum=0;
        for(int i=0;i<n;i++)
        {
            TreeNode *temp=q.front();
            q.pop();

            sum+=temp->val;

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }

        arr.push_back(sum);
    }
}
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        
        vector<int> arr;


        levelorder(root,arr);

        sort(arr.begin(),arr.end());

        if(k>arr.size())
        {
            return -1;
        }

        return arr[(arr.size()-k)];
    }
};