# [Longest Consecutive Sequence](https://neetcode.io/problems/longest-consecutive-sequence)

## Problem

Given an array of integers `nums`, return the length of the longest consecutive sequence of elements that can be formed.

A consecutive sequence is a sequence of elements in which each element is exactly `1` greater than the previous element. The elements do not have to be consecutive in the original array.

You must write an algorithm that runs in `O(n)` time.

### Example 1

```go
Input: nums = [2,20,4,10,3,4,5]
Output: 4
```

Explanation: The longest consecutive sequence is `[2, 3, 4, 5]`.

### Example 2

```go
Input: nums = [0,3,2,5,4,6,1,1]
Output: 7
```

Explanation: There are two 1's in the top-left 3x3 sub-box.

### Constraints

- `0 <= nums.length <= 1000`
- `-10^9 <= nums[i] <= 10^9`

---

## Brute Force Intuition

A naive idea would be:

- For every number, try to keep checking if `num + 1`, `num + 2`, … exist
- Checking existence by scanning the array costs `O(n)`

This leads to `O(n²)` time complexity, which is too slow.

- Time Complexity: `O(n²)`
- Space Complexity: `O(n)`

## OK (Hash Set)

This avoids counting the same sequence multiple times:

1. Insert all numbers into a hash set
2. Only start counting a sequence if the number is the start of a sequence
3. A number is a start if `num - 1` does not exist in the set
4. Count forward (`num + 1`, `num + 2`, …) until the sequence ends

## Complexity Analysis

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## Edge Cases

- Empty array (return `0`)
- Array with all duplicates (return `1`)
- Negative numbers (handled naturally)
- Unsorted input (this is OK TBH)
