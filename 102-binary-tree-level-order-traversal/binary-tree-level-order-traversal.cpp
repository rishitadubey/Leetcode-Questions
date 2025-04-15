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
class Solution {  //NAHI SAMAJH AAYA
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL)
            return {};
        vector<vector<int>> res;
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty()) {
            vector<int> temp;
            int cur_sz = que.size();
            for (int i = 0; i < cur_sz; i++) {
                TreeNode* tp = que.front();
                que.pop();
                temp.push_back(tp->val);
                    if (tp->left != NULL) {
                    que.push(tp->left);
                }
                if (tp->right != NULL) {
                    que.push(tp->right);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};