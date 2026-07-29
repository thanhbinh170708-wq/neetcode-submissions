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
    void FindSum(TreeNode* root,int tar,bool& truth, int sum)
    {
        if (root == nullptr)
        {
            if (sum == tar)
            {
                truth = true;
            }
            return;
            
        }
        else 
        {
            if (truth == true)
                return;
            else
            {
                sum += root -> val;
                if (root -> left != nullptr)
                    FindSum(root->left,tar,truth,sum);
                if (root -> right != nullptr)
                    FindSum(root-> right,tar,truth,sum);
                if (root->left == nullptr && root-> right == nullptr)
                {
                    if (sum == tar)
                    {
                        truth = true;
                        return;
                    }
                }
            }


        }
    }
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
    bool truth = false;
    if (root == nullptr)
        return truth;
    else
        FindSum(root,targetSum,truth,0);
    return truth;

        
    }
};