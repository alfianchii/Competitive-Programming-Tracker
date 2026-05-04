# [Products of Array Except Self](https://neetcode.io/problems/products-of-array-discluding-self/)

## Problem

Given an integer array `nums`, return an array `output` where `output[i]` is the product of all the elements of `nums` except `nums[i]`.

Each product is guaranteed to fit in a 32-bit integer.

Follow-up: Ccould you solve it in `O(n)` time without using the division operation?

### Example 1

```go
Input: nums = [1,2,4,6]
Output: [48,24,12,8]
```

### Example 2

```go
Input: nums = [-1,0,1,2,3]
Output: [0,-6,0,0,0]
```

### Constraints

- `2 <= nums.length <= 1000`
- `-20 <= nums[i] <= 20`

---

## Brute Force Intuition

For each index `i`, multiply every other element except `nums[i]`. This is the most straightforward way to think about the problem.

- Time Complexity: `O(n²)`
- Space Complexity: `O(1)`

## OK (Prefix & Suffix)

Instead of recomputing products repeatedly, we can reuse previous results.

1. Store, for each index, the product of all elements before it. Example for `nums = [1, 2, 3, 4]` (left products):

```go
prefix products -> [1, 1, 2, 8]
```

2. Traverse from the end and multiply each position by the product of elements after it (right products):

```go
[48, 24, 12, 8]
```

## Complexity Analysis

- Time Complexity: `0(n)`
- Space Complexity: `0(1)`

## Edge Cases

- Contains one zero (`[1, 2, 0, 4] -> [0, 0, 8, 0]`)
- Contains multiple zeros (`[0, 0, 2] -> [0, 0, 0]`)
- Single element (`[5] -> [1]`)
