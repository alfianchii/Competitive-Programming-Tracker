# [Valid Anagram](https://neetcode.io/problems/is-anagram)

## Problem

Given two strings `s` and `t`, return `true` if the two strings are anagrams of each other, otherwise return `false`.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

### Example 1

```go
Input: s = "racecar", t = "carrace"

Output: true
```

### Example 2

```go
Input: s = "jar", t = "jam"

Output: false
```

### Constraints

- `s` and `t` consist of lowercase English letters.

---

## Brute Force Approach

Sort both strings and compare the sorted results.

## Optimized Approach

- Use a hash map to count character frequencies (whether two or one hash map).
- For one hash map, increment the count for characters in `s` and decrement for characters in `t`. If any count becomes negative, the strings are not anagrams.

## Complexity Analysis

- Time Complexity: O(n + m)
- Space Complexity: O(1)

## Edge Cases

- Strings with different lengths
- Empty strings
- Repeated characters
