class Solution {
public:
    bool checkMirrorImage(TreeNode *l, TreeNode *r){
        //base case
        if(l == NULL && r == NULL){
            return true ;
        }
        //edge cases
        if(l == NULL && r != NULL){
            return false ;
        }
        if(l != NULL && r == NULL){
            return false ;
        }

        //checks
        if((l->val == r->val) && checkMirrorImage(l->left,r->right) && checkMirrorImage(l->right,r->left)){
            return true ;
        }
        
        //if no true found in above then false
        return false ;
        
    }
    bool isSymmetric(TreeNode* root) {

        if(root == NULL) return true ;

        return checkMirrorImage(root->left,root->right) ;
    }
};