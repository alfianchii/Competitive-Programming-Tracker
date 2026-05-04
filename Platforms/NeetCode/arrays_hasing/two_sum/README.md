# [Two Sum](https://neetcode.io/problems/two-integer-sum)

## Problem

Given an array of integers `nums` and an integer `target`,
return the indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Return the answer with the smaller index first.

### Example 1

```go
Input: nums = [3,4,5,6], target = 7
Output: [0,1]
```

Explanation: `nums[0] + nums[1] == 7`, so we return `[0, 1]`.

### Example 2

```go
Input: nums = [5,5], target = 10
Output: [0,1]
```

### Example 3

```go
Input: nums = [5,5], target = 10
Output: [0,1]
```

### Constraints

- `2 <= nums.length <= 1000`
- `-10,000,000 <= nums[i] <= 10,000,000`
- `-10,000,000 <= target <= 10,000,000`
- Only one valid answer exists.
