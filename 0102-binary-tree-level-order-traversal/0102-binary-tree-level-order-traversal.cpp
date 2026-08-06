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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        if(root==nullptr)
        {
            return {};
        }

        vector<vector<int>> arr;

        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty())
        {
            int n=q.size();

            vector<int> brr;

            for(int i=0;i<n;i++)
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
        

        return arr;
    }
};