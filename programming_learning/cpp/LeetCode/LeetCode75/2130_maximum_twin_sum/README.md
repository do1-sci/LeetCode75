# Maximum Twin Sum of a Linked List

## Problem
Given a linked list of even length, compute the maximum twin sum.

## Approach
1. Use fast and slow pointers to find the middle.
2. Reverse the second half of the list.
3. Traverse both halves and compute the maximum pair sum.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Key Idea
- Fast/slow pointer technique
- In-place list reversal