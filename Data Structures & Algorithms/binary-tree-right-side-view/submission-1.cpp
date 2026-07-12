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
 void TraverseTree(TreeNode* root,vector<vector<int>>& ans,int height,int& max_height)
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
                vector<int> a;
                ans.push_back(a);
            }
            ans[height].push_back(root -> val);
            TraverseTree(root -> left,ans,height+1,max_height);
            TraverseTree(root -> right,ans,height+1,max_height);
            
            return;
        }
    }

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
    int max = -1;
    int height = 0;
    vector<vector<int>> saveans;   
    TraverseTree(root,saveans,height,max);
    vector<int> ans;
    for (int i = 0; i < saveans.size();i++)
    {
        ans.push_back(saveans[i].back());
    }        
    return ans;
    
    }
};
