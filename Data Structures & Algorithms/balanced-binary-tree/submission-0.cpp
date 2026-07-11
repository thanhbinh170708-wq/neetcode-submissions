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
    int checkbalance(TreeNode* root,int paths, bool& factos)
    {
        if (root == nullptr)
        {
            return paths;
        }
        else
        {
            
            int path1 = checkbalance(root -> right,paths+1,factos);
            int path2 = checkbalance(root -> left,paths+1,factos);
            paths = max(path1,path2);
            if (abs(path1 - path2) >= 2)
            {
                factos = false;
            }
            return paths;

        }

    }

class Solution {
public:
    bool isBalanced(TreeNode* root) {
    bool factos = true;
    int paths = 0;
    int a = checkbalance(root,paths,factos);
    return factos;
    }
};
