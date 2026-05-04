# [Top K Frequent Elements](https://neetcode.io/problems/top-k-elements-in-list)

## Problem

Given an integer array `nums` and an integer `k`, return the `k` most frequent elements within the array.
The test cases are generated such that the answer is always unique.
You may return the output in any order.

### Example 1

```go
Input: nums = [1,2,2,3,3,3], k = 2
Output: [2,3]
```

### Example 2

```go
Input: nums = [1,1,2,2,3,3], k = 1
Output: [1,2,3]
```

### Constraints

- `1 <= nums.length <= 10^4`
- `-1000 <= nums[i] <= 1000`
- `1 <= k <= number of unique elements`

---

## Brute Force (Sorting)

To find the most frequent elements, I first need to count how often each number appears. Once frequencies are known, a natural idea is:

1. Convert the frequency map into a list
2. Sort the list by frequency
3. Take the top `k` elements

This works, but sorting introduces unnecessary overhead~

## OK (Bucket Sort)

The maximum possible frequency of any element is `len(nums)`. Instead of sorting elements by frequency, I do:

- Group elements into "freqs" based on how often they appear
- Traverse freqs from highest frequency to lowest
- Collect elements until have `k`

## Complexity Analysis

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## Edge Cases

- `k == 1`
- All elements identical
- `k == number of unique elements`
- Negative integers
