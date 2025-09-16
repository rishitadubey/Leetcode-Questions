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
class Solution {
public:
 bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;// Public function to call the optimized checker

    }
    int checkHeight(TreeNode* root) {// checkHeight function that returns height if balanced, -1 otherwise
        if(root==NULL) //: Check if the root is null. If so, return true as an empty tree is balanced.
        {
            return true;
        }
          int leftHeight = checkHeight(root->left);
          if(leftHeight == -1) return -1;// Left subtree not balanced

          int rightHeight = checkHeight(root->right);
          if(rightHeight==-1) return -1;// Right subtree not balanced

          if(abs(leftHeight-rightHeight)>1) return -1;// Current node unbalanced
          return max(leftHeight,rightHeight) +1;// Return height if balanced
    }
    
};