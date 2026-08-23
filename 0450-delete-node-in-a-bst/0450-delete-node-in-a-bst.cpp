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
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root==nullptr)
        {
            return nullptr;
        }

        if(root->val==key)
        {
            if(root->left==nullptr && root->right==nullptr)
            {
                return nullptr;
            }
            else if((root->left!=nullptr && root->right==nullptr) || (root->left==nullptr && root->right!=nullptr))
            {
                if(root->left!=nullptr)
                {
                    return root->left;
                }
                else
                {
                    return root->right;
                }
            }
            else
            {
                TreeNode *temp=root->left;

                while(temp->right)
                {
                    temp=temp->right;
                }

                int value=temp->val;

                root->val=temp->val;

                root->left=deleteNode(root->left,value);

                return root;

            }
        }
        
        if(key>root->val)
        {
            root->right=deleteNode(root->right,key);
        }
        else
        {
            root->left=deleteNode(root->left,key);
        }

        return root;
    }
};