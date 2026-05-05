# [Daily Temperatures](https://neetcode.io/problems/daily-temperatures)

## Problem

You are given an array of integers temperatures where `temperatures[i]` represents the daily `temperatures` on the `ith` day.

Return an array `result` where `result[i]` is the number of days after the `ith` day before a warmer temperature appears on a future day. If there is no day in the future where a warmer temperature will appear for the `ith` day, set `result[i]` to `0` instead.

### Example 1

```go
Input: temperatures = [30,38,30,36,35,40,28]
Output: [1,4,1,2,1,0,0]
```

### Example 2

```go
Input: temperatures = [22,21,20]
Output: [0,0,0]
```

### Constraints

- `1 <= temperatures.length <= 1000`
- `1 <= temperatures[i] <= 100`

---

## Brute Force Intuition

For every day, check all future days one by one until I find a warmer temperature. If a warmer temperature is found, store the distance between the current day and that warmer day. If no warmer day exists, keep the result as `0`. This works, but it repeats too much work because each day may scan many future days (tho this is not a stack).

- Time Complexity: `O(n^2)`
- Space Complexity: `O(n)`

## OK (Monotonic Stack)

Use a stack to store indexes of days that still have not found a warmer future temperature. The stack does not store the temperature directly. It stores the index, because I need the index difference to calculate the number of waiting days. When reading the array from left to right, create a result slice filled with `0`, and use a stack to store unresolved indexes.

## Complexity Analysis

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## Edge Cases

- Temperatures are strictly increasing/decreasing
- All temperatures are the same
