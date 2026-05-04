# [Group Anagrams](https://neetcode.io/problems/anagram-groups/)

## Problem

Given an array of strings `strs`, group the anagrams together.  
An anagram is a word formed by rearranging the letters of another word, using all the original letters exactly once.

### Example 1

```go
Input: ["eat","tea","tan","ate","nat","bat"]
Output: [["eat","tea","ate"],["tan","nat"],["bat"]]
```

### Example 2

```go
Input: strs = ["x"]
Output: [["x"]]
```

### Example 3

```go
Input: strs = [""]
Output: [[""]]
```

### Constraints

- `2 <= nums.length <= 1000`
- `-10,000,000 <= nums[i] <= 10,000,000`
- `-10,000,000 <= target <= 10,000,000`
- Only one valid answer exists.

---

## Brute Force Intuition

A straightforward idea is:

- Pick a string
- Compare it with every other string
- Check whether they are anagrams
- Group matching strings together

This requires pairwise comparisons, which is inefficient for large inputs.

## Brute Force (Sorting)

A common improvement is:

- Sort each string alphabetically
- Use the sorted string as a key
- All anagrams share the same sorted form

## OK (Hash Map)

Two strings are anagrams **if and only if** they have the **same frequency of each character**.

Instead of sorting:

1. Count how many times each letter (a–z) appears
2. Store that frequency array as a hash key
3. Group strings that share the same frequency array

## Complexity Analysis

- Time Complexity: O(n . k)
- Space Complexity: O(n . k)

## Edge Cases

- Empty strings ("")
- Single-character strings
- All strings are anagrams
- No strings are anagrams
