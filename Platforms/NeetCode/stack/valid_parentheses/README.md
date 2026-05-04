# [Valid Parentheses](https://neetcode.io/problems/validate-parentheses)

## Problem

You are given a string `s` consisting of the following characters: `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`.

The input string `s` is valid if and only if:

1. Every open bracket is closed by the same type of close bracket.
2. Open brackets are closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

Return `true` if `s` is a valid string, and `false` otherwise.

### Example 1

```go
Input: s = "[]"
Output: true
```

### Example 2

```go
Input: s = "([{}])"
Output: true
```

### Example 3

```go
Input: s = "[(])"
Output: false
```

Explanation: The brackets are not closed in the correct order.

### Constraints

- `1 <= s.length <= 1000`

---

## Brute Force Intuition

No.

## OK (Stack)

When reading the string from left to right, an opening bracket introduces a new unresolved requirement (I called it the `top`) and a closing bracket must resolve the most recent opening bracket (the `top`). The main idea:

1. Use a stack to store opening brackets
2. Use a map to match closing brackets to their corresponding opening brackets
3. Traverse the string. If an opening bracket appears, push to stack. If a closing bracket appears, stack must not be empty, top of stack must match the closing bracket. Otherwise, invalid
4. At the end, the stack must be empty

## Complexity Analysis

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## Edge Cases

- Empty string
- Single opening bracket (`"("`, `"["`)
- Closing bracket first (`")"`)
