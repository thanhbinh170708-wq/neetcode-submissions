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
    bool FindNode(TreeNode* root,TreeNode* p)
    {
        if (root == nullptr)
        {
            return false;
        }
        else if (root -> val == p-> val) 
        {
            return true;
        }
        else
        {
            return (FindNode(root -> left,p) || FindNode(root -> right,p));
            
        }
    }
    TreeNode* FindAncestor(TreeNode* root,TreeNode*p,TreeNode* q)
    {
        if (root == nullptr)
        {
            return nullptr;
        }
        else if (root -> left != nullptr &&((FindNode(root->left,p) && FindNode(root->left,q) ) == true))
        {
            TreeNode* T = FindAncestor(root -> left,p,q);
            if ( T != nullptr)
            {
                return T;
            }
            else
            {
                return root;
            }
            
        }
        else if (root -> right != nullptr &&((FindNode(root->right,p) && FindNode(root->right,q) ) == true))
        {
            TreeNode* T = FindAncestor(root -> right,p,q);
            if ( T != nullptr)
            {
                return T;
            }
            else
            {
                return root ;
            }
            
        }
        else if ((FindNode(root,p) && FindNode(root,q)) == true)
        {
            return root;
        }
        
    }


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    TreeNode* n = FindAncestor(root,p,q);
    return n;
        
    }
};
