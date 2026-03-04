# 1448 Count Good Nodes in Binary Tree

## Problem

Given a binary tree `root`, a node X in the tree is called **good** if in the path from the root to X there are no nodes with a value greater than X.

Return the number of good nodes in the binary tree.

---
## Approach

We use **Depth-First Search (DFS)** with recursion.

### Key Idea

While traversing the tree, we keep track of:

- The maximum value seen so far along the path from the root.

At each node:
1. If `node->val >= maxSoFar`, it is a good node.
2. Update `maxSoFar = max(maxSoFar, node->val)`.
3. Recursively check left and right children.
4. Return the total count.

---

## Complexity

- Time Complexity: **O(n)**  
  (Each node is visited once)

- Space Complexity: **O(h)**  
  (Recursive call stack, where h is the height of the tree)

---

## File

- `solution.cpp` — C++ implementation using recursive DFS