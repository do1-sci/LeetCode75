# 1372. Longest ZigZag Path in a Binary Tree

## Problem
Given the root of a binary tree, return the length of the longest **ZigZag path**.

A ZigZag path is defined as:
- Start from any node.
- Move to either left or right child.
- Alternate direction at each step.
- Continue until you cannot move further.

The ZigZag length is:

length = number of visited nodes - 1


---

## Approach (DFS)

Use **Depth First Search**.

For each node, keep two values:

- `left_len`  : ZigZag length ending with a move to the left
- `right_len` : ZigZag length ending with a move to the right

### Transition

If we go left:
