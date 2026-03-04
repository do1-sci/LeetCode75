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
    int countGood(TreeNode* root,int M){
        if (!root) return 0;
        int count = (root->val >= M);
        int newMax = max(root->val,M);
        count += countGood(root->left, newMax);
        count += countGood(root->right, newMax);
        return count;
    }
    int goodNodes(TreeNode* root) {
        return countGood(root,root -> val);
    }
};