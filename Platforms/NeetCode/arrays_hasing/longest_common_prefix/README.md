# [Longest Common Prefix](https://neetcode.io/problems/longest-common-prefix)

## Problem

You are given an array of strings `strs`. Return the longest common prefix of all the strings.

If there is no longest common prefix, return an empty string `""`.

### Example 1

```go
Input: strs = ["bat","bag","bank","band"]
Output: "ba"
```

### Example 2

```go
Input: strs = ["dance","dag","danger","damage"]
Output: "da"
```

### Example 3

```go
Input: strs = ["neet","feet"]
Output: ""
```

### Constraints

- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` is made up of lowercase English letters if it is non-empty.

---

## Brute Force Intuition

Mmmhmhmhmm my way to think about this problem is:

1. Take the first string as a reference (baseline)
2. Compare its characters one by one with all other strings
3. Stop as soon as a mismatch is found

## OK (?)

?

## Complexity Analysis

- Time Complexity: `O(n . m)`
- Space Complexity: `O(1)`

## Edge Cases

- Empty array
- Single string
- No common prefix
- Strings with different lengths
