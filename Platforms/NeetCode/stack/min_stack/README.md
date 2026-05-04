# [Min Stack](https://neetcode.io/problems/minimum-stack)

## Problem

Design a stack class that supports the `push`, `pop`, `top`, and `getMin` operations.

The input string `s` is valid if and only if:

- `MinStack()` initializes the stack object.
- `void push(int val)` pushes the element `val` onto the stack.
- `void pop()` removes the element on the top of the stack.
- `int top()` gets the top element of the stack.
- `int getMin()` retrieves the minimum element in the stack.

Each function should run in `O(1)` time.

### Example 1

```go
Input: ["MinStack", "push", 1, "push", 2, "push", 0, "getMin", "pop", "top", "getMin"]
Output: [null,null,null,null,0,null,2,1]

Explanation:
MinStack minStack = new MinStack();
minStack.push(1);
minStack.push(2);
minStack.push(0);
minStack.getMin(); // return 0
minStack.pop();
minStack.top(); // return 2
minStack.getMin(); // return 1
```

### Constraints

- `-2^31 <= val <= 2^31 - 1`
- `pop`, `top` and `getMin` will always be called on non-empty stacks.

---

## Brute Force Intuition

Use a normal stack (slice). When `GetMin()` is called, scan the entire stack to find the smallest value.

- Time Complexity (for `GetMin()`): `O(n)`
- Space Complexity: `O(n)`

## OK (Two-Stack)

To achieve `O(1)` in `getMin()`, I should never recompute the minimum. At every stack depth, I kept what the minimum is up to that point. Therefore no scanning and recomputation.

## Complexity Analysis

- Time Complexity: `O(1)`
- Space Complexity: `O(n)`

## Edge Cases

- Pushing decreasing values
- Pushing duplicates
- Popping the current minimum
- Negative numbers
- Single-element stack
