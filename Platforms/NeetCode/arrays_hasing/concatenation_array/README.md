# [Concatenation of Array](https://neetcode.io/problems/concatenation-of-array)

## Problem

You are given an integer array `nums` of length `n`. Create an array `ans` of length `2n` where `ans[i] == nums[i]` and `ans[i + n] == nums[i]` for `0 <= i < n` (0-indexed).

Specifically, `ans` is the concatenation of two `nums` arrays.

Return the array `ans`.

### Example 1

```go
Input: nums = [1,4,1,2]
Output: [1,4,1,2,1,4,1,2]
```

### Example 2

```go
Input: nums = [22,21,20,1]
Output: [22,21,20,1,22,21,20,1]
```

### Constraints

- `1 <= nums.length <= 1000`
- `1 <= nums[i] <= 1000`

---

## Brute Force Intuition

No.

## OK (Iteration w/ One Pass)

First I do pre-allocate a result slice of size `len(nums) * 2`, loop once through `nums`, and place each element at index `i` and `i + len(nums)`. This avoids unnecessary appends and reallocations.

## Complexity Analysis

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## Edge Cases

- Empty array
- Single-element array
- Negative or large integers
