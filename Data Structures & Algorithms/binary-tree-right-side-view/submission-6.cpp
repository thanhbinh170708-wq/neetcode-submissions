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
 void TraverseTree(TreeNode* root,vector<int>& ans,int height,int& max_height)
    {
        if (root == nullptr)
        {
            return;
        }
        else
        {
            if (max_height < height)
            {
                max_height = height;
                ans.push_back(root->val);
            }
            
            TraverseTree(root -> right,ans,height+1,max_height);
            TraverseTree(root -> left,ans,height+1,max_height);
            
            
            return;
        }
    }

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
    int max = -1;
    int height = 0;
    vector<int> ans;   
    TraverseTree(root,ans,height,max);
    
    return ans;
    
    }
};
