# [Evaluate Reverse Polish Notation](https://neetcode.io/problems/evaluate-reverse-polish-notation)

## Problem

You are given an array of strings tokens that represents a valid arithmetic expression in [Reverse Polish Notation](https://en.wikipedia.org/wiki/Reverse_Polish_notation).

Return the integer that represents the evaluation of the expression.

- The operands may be integers or the results of other operations.
- The operators include `'+'`, `'-'`, `'*'`, and `'/'`.
- Assume that division between integers always truncates toward zero.

### Example 1

```go
Input: tokens = ["1","2","+","3","*","4","-"]
Output: 5
Explanation: ((1 + 2) * 3) - 4 = 5
```

### Constraints

- `1 <= tokens.length <= 1000`
- `tokens[i]` is `"+"`, `"-"`, `"*"`, or `"/"`, or a string representing an integer in the range `[-100, 100]`

---

## Brute Force Intuition

N/A

## OK (Stack)

Use a stack to store numbers that are waiting to be used. When reading the tokens from left to right, if the token is a number, convert it to integer and push it into the stack. If the token is an operator, pop two numbers from the stack. The first popped number is the `right` operand and the second popped number is the `left` operand. Evaluate `left operator right`. Push the result back into the stack.

## Complexity Analysis

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## Edge Cases

- Three or more numbers before an operator, for example `["1","2","3","+","*"]`
