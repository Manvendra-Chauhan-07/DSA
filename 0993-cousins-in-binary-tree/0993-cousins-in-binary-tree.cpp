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

int parent(TreeNode *root, int a , int b)
{
    if(root==nullptr) return 0;

    if(root->left && root->right)
    {
        if(root->left->val==a && root->right->val==b)
        {
            return 1;
        }
        if(root->left->val==b && root->right->val==a)
        {
            return 1;
        }
    }
    return (parent(root->left,a ,b)) || (parent(root->right,a,b));
}
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        
        queue<TreeNode *> q;
        q.push(root);

        int levelX=-1, levelY=-1;
        int level=0;

        while(!q.empty())
        {
            int n=q.size();

            for(int i=0;i<n;i++)
            {
                TreeNode *temp=q.front();
                q.pop();

                if(temp->val==x)
                {
                    levelX=level;
                }
                if(temp->val==y)
                {
                    levelY=level;
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

            if(levelX!=levelY)
            {
                return false;
            }

            if(levelX!=-1 && levelY!=-1)
            {
                break;
            }
        }

        if(levelX == -1 && levelY == -1) return 0;

        return !(parent(root,x,y));
    }
};