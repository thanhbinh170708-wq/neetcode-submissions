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
    void acessnode(TreeNode* root, int tempval,int& maxval)
    {
        if (tempval > maxval)
        {
            maxval = tempval;
        }
        if (root == nullptr)
        {
            return ;
        }
        else
        {
            tempval ++;
            acessnode(root -> left,tempval,maxval);
            acessnode(root->right,tempval,maxval);
        }
    }

class Solution {
public:
    int maxDepth(TreeNode* root) {
    int tempval = 0;
    int maxval = 0;
    if (root == nullptr)
    {
        return maxval;
    }
    else
    {
        acessnode(root,tempval,maxval);
        return maxval;
    }
    }
};
