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
    void checkBT(TreeNode* root,bool& signal,int highbound,int lowbound)
    {
        
        if (root == nullptr)
        {

            return;
        }
        else
        {
            
            if (signal == false)
            {
                return;
            }
            else
            {
                if (root -> left != nullptr)
                {
                    
                    if (root -> left -> val > lowbound && root -> left -> val < root->val)
                    {
                        
                        checkBT(root->left,signal,root->val,lowbound);
                    }
                    else
                    {
                        signal = false;
                        return;
                    }

                }
                
                if (root -> right != nullptr)
                {
                    
                    if (root -> right -> val > root->val && root -> right -> val < highbound)
                    {
                        
                        checkBT(root->right,signal,highbound,root->val);
                        
                    }
                    else
                    {
                        signal = false;
                        return;
                    }

                }
                
                

            }
        }
    }
class Solution {
public:
    bool isValidBST(TreeNode* root) {
       bool signal = true; 
       int max;
       int min;
       if (root != nullptr)
        {
            min = -1001;
            max = 1001;
        }
        else return true;
       checkBT(root,signal,max,min);
       return signal;
    }
};
