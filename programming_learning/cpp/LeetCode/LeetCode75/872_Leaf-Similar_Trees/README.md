# 872 Leaf-Similar Trees

## Problem
Given two binary trees, consider all the leaves of each tree from **left to right order**.  
The values of those leaves form a **leaf value sequence**.  

Two trees are **leaf-similar** if their leaf value sequences are the same.  
Return `true` if and only if the two given trees are leaf-similar.

## Solution
- Language: C++
- Approach: **Recursion + DFS**
- Steps:
  1. Traverse the tree and collect all leaf values from left to right using recursion.
  2. Compare the leaf sequences of both trees.
  3. Return `true` if sequences are identical, otherwise `false`.

- Time Complexity: O(n + m), where n and m are the number of nodes in the two trees  
- Space Complexity: O(h1 + h2), due to recursion stack (h1, h2 = heights of the trees)