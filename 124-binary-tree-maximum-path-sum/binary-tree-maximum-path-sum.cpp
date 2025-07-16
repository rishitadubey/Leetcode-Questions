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

int maxSum=INT_MIN;//It initializes maxSum to the smallest possible value an integer can hold

    int recursive(TreeNode* root) { // recursive func returns the maximum path sum from the current node downward to either left or right (not both)
    
    
      if(root==nullptr) return 0;   
            int l =recursive(root->left);
            int r= recursive(root->right);
             
        //all posibilities

         maxSum =max(root->val,maxSum);
         maxSum= max(root->val +l, maxSum);
         maxSum= max(root->val +r, maxSum);
         maxSum = max(root->val +l+r,maxSum);

    return max(root->val, max(root->val + l, root->val + r));

    }
    int maxPathSum(TreeNode* root){
         recursive(root);
         return maxSum;
    }
};