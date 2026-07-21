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
    void TraverseTree(TreeNode* root,vector<int>& ans)
    {
        if (root == nullptr)
        {
            return;
        }
        else
        {
            if (root->left == nullptr && root -> right == nullptr)
            {
                ans.push_back(root->val);
                return;
            }
            else if (root -> left != nullptr)
            {
                TraverseTree(root->left,ans);
                ans.push_back(root->val);
            }
            if (root ->right != nullptr)
            {
                
                if (root->left == nullptr)
                {
                    ans.push_back(root-> val);
                }
                TraverseTree(root->right,ans);
            }
            
        }
    }
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int> ans;
    TraverseTree(root,ans);
    return ans;
    }
};