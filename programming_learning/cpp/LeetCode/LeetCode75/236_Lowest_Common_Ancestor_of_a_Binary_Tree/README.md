# Lowest Common Ancestor of a Binary Tree

## Problem

Given a binary tree, find the **Lowest Common Ancestor (LCA)** of two nodes `p` and `q`.

The **LCA** is defined as the lowest node in the tree that has both `p` and `q` as descendants.  
A node can be a descendant of itself.

---

## Approach

We solve this problem using **DFS with recursion**.

### Base Case

If the current node is:

- `nullptr`
- `p`
- `q`

then return the node.

```cpp
if (!root || root == p || root == q)
    return root;
```

---

### Recursive Search

Search the left and right subtrees.

```cpp
TreeNode* left = lowestCommonAncestor(root->left, p, q);
TreeNode* right = lowestCommonAncestor(root->right, p, q);
```

---

### Determine the LCA

There are three cases:

1. **Both left and right are not null**

This means `p` and `q` are found in different subtrees.

```cpp
if (left && right)
    return root;
```

2. **Only left is not null**

```cpp
return left;
```

3. **Only right is not null**

```cpp
return right;
```

---

## Complexity

Time Complexity

```
O(N)
```

Every node is visited once.

Space Complexity

```
O(H)
```

Where `H` is the height of the tree.

---

## C++ Implementation