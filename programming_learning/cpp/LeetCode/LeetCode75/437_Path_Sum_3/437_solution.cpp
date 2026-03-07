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
    int dfs(TreeNode* node, long sum, int target,
            unordered_map<long,int>& mp) {
        
        if (!node) return 0;

        sum += node->val;

        int count = mp[sum - target];

        mp[sum]++;

        count += dfs(node->left, sum, target, mp);
        count += dfs(node->right, sum, target, mp);

        mp[sum]--;

        return count;
    }

    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long,int> mp;
        mp[0] = 1;

        return dfs(root, 0, targetSum, mp);
    }
};