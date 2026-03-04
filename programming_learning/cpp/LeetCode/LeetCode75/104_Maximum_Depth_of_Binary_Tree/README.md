# 104 Maximum Depth of Binary Tree

## Problem
Given the root of a binary tree, return its **maximum depth**.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

## Solution
- Language: C++
- Approach: Recursion
- Steps:
  1. If the node is null, return 0.
  2. Recursively compute the depth of the left and right subtrees.
  3. Return the maximum of the two depths plus 1.

- Time Complexity: O(n)
- Space Complexity: O(h) (recursive stack)