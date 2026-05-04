# [Contains Duplicate](https://neetcode.io/problems/duplicate-integer)

## Problem

Given an integer array `nums`, return `true` if any value appears more than once in the array, otherwise return `false`.

### Example 1

```go
Input: nums = [1, 2, 3, 3]
Output: true
```

### Example 2

```go
Input: nums = [1, 2, 3, 4]
Output: false
```

### Constraints

- `1 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`

---

## OK (Hash Map)

I'm using a hash map to store numbers as we iterate through the array:

1. Create a hash map to track seen numbers
2. Iterate through the array
3. If a number already exists in the map, return `true`
4. If the loop finishes, return `false`

## Complexity Analysis

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`
