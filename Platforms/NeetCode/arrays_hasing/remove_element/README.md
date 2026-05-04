# [Remove Element](https://neetcode.io/problems/remove-element)

## Problem

You are given an integer array `nums` and an integer `val`. Your task is to remove all occurrences of `val` from `nums` in-place.

After removing all occurrences of `val`, return the number of remaining elements, say `k`, such that the first `k` elements of `nums` do not contain `val`.

Note:

- The order of the elements which are not equal to `val` does not matter.
- It is not necessary to consider elements beyond the first `k` positions of the array.
- To be accepted, the first `k` elements of `nums` must contain only elements not equal to `val`.

Return `k` as the final result.

### Example 1

```go
Input: nums = [1,1,2,3,4], val = 1
Output: 3
nums (first k elements) = [2,3,4]
```

### Example 2

```go
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5
nums (first k elements) = [0,1,3,0,4]
```

### Constraints

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`

---

## Brute Force Intuition

No.

## OK (Two Pointers)

I should modify the `nums` too (in-place). So instead of creating a new array, reuse the original `nums`, maintain a pointer `k` for where the next valid element should go, and overwrite unwanted elements.

## Complexity Analysis

- Time Complexity: `O(n)`
- Space Complexity: `O(1)`

## Edge Cases

- `nums` is empty
- All elements equal to `val`
- No elements equal to `val`
- `val` appears only once
