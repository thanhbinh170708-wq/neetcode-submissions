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
    int acessnode(TreeNode* root, int tempval,int& maxval)
    {
        if (root == nullptr)
        {
            return tempval;
        }
        else
        {
            tempval ++;
            int tempval1 = acessnode(root -> left,tempval,maxval);
            int tempval2 = acessnode(root -> right,tempval,maxval);
            int tempmax = max(tempval1,tempval2);
            maxval = max(tempval1 + tempval2 - 2*tempval ,maxval);
            return tempmax;
        }
    }
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
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
