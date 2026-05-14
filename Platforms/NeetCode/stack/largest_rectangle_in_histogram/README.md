# [Largest Rectangle In Histogram](https://neetcode.io/problems/largest-rectangle-in-histogram/)

## Problem

You are given an array of integers `heights` where `heights[i]` represents the height of a bar. The width of each bar is `1`.
Return the area of the largest rectangle that can be formed among the bars.
Note: This chart is known as a [histogram](https://en.wikipedia.org/wiki/Histogram).

### Example 1

```go
Input: heights = [7,1,7,2,2,4]
Output: 8
```

### Example 2

```go
Input: heights = [1,3,7]
Output: 7
```

### Constraints

- `1 <= heights.length <= 1000`
- `0 <= heights[i] <= 1000`

---

## Brute Force Intuition

For every starting index, expand the rectangle to the right one bar at a time. While expanding, keep track of the minimum height in the current range. The rectangle height is always limited by the shortest bar in that range, and the width is the number of bars included. For example, for a range `heights[left:right]`, the area is `minHeight * width`. This works, but it checks many overlapping ranges repeatedly.

- Time Complexity: `O(n^2)`
- Space Complexity: `O(1)`

## OK (Monotonic Stack)

Use a monotonic increasing stack to store indexes of bars that have not found their right boundary yet. The stack stores indexes, not heights directly, because I need the index difference to calculate the rectangle width.

So when a smaller height appears, all taller bars before it can no longer extend to the right. Therefore, their maximum rectangle can be calculated immediately. The bar popped from the stack becomes the rectangle height. The current index is the first smaller bar on the right, and the new stack top is the first smaller bar on the left.

## Complexity Analysis

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## Edge Cases

- All heights are the same
