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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p || !q) return p==q; // agar p q dono null h || agar ek null ek valid hai 
         if (p->val == q-> val) // agar p, q nodes ki value same h toh
         return isSameTree( p->left, q-> left) && isSameTree( p->right , q->right); // 
         return false;
    }
};