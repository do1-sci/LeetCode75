# Path Sum III

## Problem
Given the root of a binary tree and an integer targetSum,
return the number of paths where the sum of the values equals targetSum.

Conditions
- The path does not need to start at the root
- The path does not need to end at a leaf
- The path must go downwards (parent → child)

## Approach

Use DFS to traverse the tree and keep track of the current sum.

At each node:
1. Add the node value to the current sum.
2. Check if (currentSum - targetSum) exists in a hashmap.
3. If it exists, we found a valid path.
4. Continue DFS for left and right children.
5. When returning from recursion, remove the current sum from the map.

This uses the prefix sum idea.

## Time Complexity
O(N)

Each node is visited once.

## Space Complexity
O(N)

Used for recursion stack and hashmap.

## C++ Code

```cpp
class Solution {
public:
    int dfs(TreeNode* node, long sum, int target, unordered_map<long,int>& mp) {
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