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

bool equal(TreeNode* p , TreeNode* q)
    {
        if ((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr))
        {
            return false;
        }
        else if (p == nullptr && q == nullptr)
        {
            return true;
        }
        else
        {
            if (p -> val != q -> val)
            {
                return false;
            }
            else
            {
                bool same1 = equal(p -> left , q -> left);
                
                if (same1 == false)
                {
                    return false;
                } 
                bool same2 = equal(p -> right, q -> right);
                if (same2 == false)
                {
                    return false;
                }
                else
                {
                    return true;
                }
                             
            }
        }
    }
    bool checktree(TreeNode* root, TreeNode* subroot)
    {
        if (root == nullptr)
        {
            return false;
        }
        else if (equal(root,subroot) == true)
        {
            return true;
        }
        else
        {
            if (checktree(root -> left,subroot) == true)
            {
                return true;
            }
            else if (checktree(root -> right,subroot) == true)
            {
                return true;
            }
            else
                return false;
        }
        
    }
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr)
        {
            if (subRoot == nullptr)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (subRoot == nullptr)
        {
            return true;
        }
        else
        {
            return checktree(root,subRoot);
        }
        
    }
};
