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
    int CountGood(TreeNode* root,int max)
    {
        int sum1 = 0;
        int sum2 = 0;
        int oldmax = max;
        if (root == nullptr)
        {
            return 0;
        }
        else
        {
            if (root -> left != nullptr)
            {
                if (root -> left -> val >= max)
                { 
                    max = root->left->val;
                    sum1 = 1 + CountGood(root->left,max);
                }
                else
                    sum1 = CountGood(root->left,max);
            }
            if (root -> right != nullptr)
            {
                if (root -> right -> val >= oldmax)
                {
                    oldmax = root->right->val;
                    sum2 = 1+ CountGood(root->right,oldmax);
                    
                }
                else
                    sum2 = CountGood(root->right,oldmax);
            }
            return sum1+sum2;
        }
    }

class Solution {
public:
    int goodNodes(TreeNode* root) {
    int max = root->val;    
    return 1+ CountGood(root,max);
        
        
    }
};
