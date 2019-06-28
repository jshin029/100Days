/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int inorder(TreeNode* node, int L, int R){
        if (node == NULL){
            return 0;
        }
        if (node->val < L){
            return inorder(node->right, L, R);
        } 
        else if (node->val > R){
            return inorder(node->left, L, R);
        }
        else {
            return node->val + inorder(node->left, L, R) + inorder(node->right, L, R);
        }
    }
        
    int rangeSumBST(TreeNode* root, int L, int R) {
        return inorder(root, L, R);
    }
};
