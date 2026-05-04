# [Remove Element](https://neetcode.io/problems/majority-element)

## Problem

Given an array `nums` of size `n`, return the majority element.

The majority element is the element that appears more than `⌊n / 2⌋` times in the array. You may assume that the majority element always exists in the array.

### Example 1

```go
Input: nums = [5,5,1,1,1,5,5]
Output: 5
```

### Example 2

```go
Input: nums = [2,2,2]
Output: 2
```

### Constraints

- `1 <= nums.length <= 50,000`
- `-1,000,000,000 <= nums[i] <= 1,000,000,000`

---

## Brute Force Intuition

No.

## OK (Hash Map)

I can count frequencies efficiently using a hash map anyway:

1. Create a map `freq` to store how many times each number appears
2. Iterate through the array, increment the count of the current number, and track the number with the highest frequency so far
3. Return the number with the maximum frequency

## Complexity Analysis

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## Edge Cases

- Array with one element
- All elements identical
- Negative numbers
