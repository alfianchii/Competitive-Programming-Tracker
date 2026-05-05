# [CSES Apple Division - Easy](https://cses.fi/problemset/task/1623)

## Problem Description

There are `n` apples with known weights. Your task is to divide the apples into two groups so that the absolute difference between the total weights of the two groups is minimal.

### Input

The first input line has an integer `n`: the number of apples.
The next line has `n` integers `P1, P2, ..., Pn` (1 <= Pi <= 10^9): the weight of each apple.

### Output

Print one integer: the minimum difference between the weights of the two groups.

### Example

**Input (`apple.in`):**

```bash
5
3 2 7 4 1
```

**Output (`apple.out`):**

```bash
1
```

**Explanation:**

Group 1 has weights 2, 3, and 4 (total weight 9), and group 2 has weights 1 and 7 (total weight 8). The absolute difference is `abs(9 - 8) = 1`.

---

## Approach

Since the maximum number of apples is very small (`n <= 20`), this is a perfect candidate for a brute-force/complete search approach. We can generate all possible ways to divide the apples into two sets. There are two common ways to implement this idea: recursion and bitmasking.

### Recursive Complete Search

1. Recursive State: Create a recursive function that tracks the `index` of the current apple being evaluated, the `sum1` (total weight of Group 1 so far), and `sum2` (total weight of Group 2 so far).
2. Branching: For each apple at `index`, make two recursive calls:

- - Put the apple in Group 1 (`sum1 + weights[index]`).
- - Put the apple in Group 2 (`sum2 + weights[index]`).

3. Base Case: When `index == n` (all apples have been distributed), calculate and return the absolute difference `abs(sum1 - sum2)`.
4. Optimization: At each step, return the `min()` of the two recursive branches. The function will naturally bubble up the smallest absolute difference found across all combinations.

This approach explores all `2^n` possible divisions and works efficiently because `n` is small.

### Complete Search Using Bitmask

Instead of recursion, we can also represent each possible division using a bitmask.

1. Bitmask Representation

   Each integer `mask` from `0` to `2^n - 1` (we start from 0, not 1) represents one possible division:
   - The `i`-th bit of `mask` determines where apple `i` goes.
   - If the `i`-th bit is `1`, apple `i` is placed in Group 1.
   - If the `i`-th bit is `0`, apple `i` is placed in Group 2.

2. Iterating Over All Possibilities

   We loop through all values of `mask`. This guarantees that every possible division is considered exactly once.

3. Computing Group Sums

   For each `mask`, we iterate through all apples and add `weights[i]` to `sum1` if `(mask & (1 << i))` is non-zero. Otherwise, add `weights[i]` to `sum2`.

4. Tracking the Minimum Difference

   For each division, we do compute `abs(sum1 - sum2)` and keep track of the minimum value across all masks.

#### Example

Input: `[3, 2, 4]` (`n = 3`)

- First, it means `3 + 2 + 4 = 9`, we have `9` as the weight of all apples.
- Second, it means `2 . 2 . 2 = 8`, we have `8` possibilities.

| Mask (decimal) | Binary | Meaning                   |
| -------------- | ------ | ------------------------- |
| 0              | 000    | all apples in Group 2     |
| 1              | 001    | apple 0 in Group 1        |
| 2              | 010    | apple 1 in Group 1        |
| 3              | 011    | apples 0 and 1 in Group 1 |
| 4              | 100    | apple 2 in Group 1        |
| 5              | 101    | apples 0 and 2 in Group 1 |
| 6              | 110    | apples 1 and 2 in Group 1 |
| 7              | 111    | all apples in Group 1     |

For each mask, we compute the total weight of Group 1 and Group 2 based on the binary representation of the mask. If the `i`-th bit is `1`, apple `i` is placed in Group 1; otherwise, it is placed in Group 2.

| Mask | Binary | Group 1 apples | Group 1 sum | Group 2 sum | Difference |
| ---- | ------ | -------------- | ----------- | ----------- | ---------- |
| 0    | 000    | —              | 0           | 9           | 9          |
| 1    | 001    | {3}            | 3           | 6           | 3          |
| 2    | 010    | {2}            | 2           | 7           | 5          |
| 3    | 011    | {3, 2}         | 5           | 4           | 1          |
| 4    | 100    | {4}            | 4           | 5           | 1          |
| 5    | 101    | {3, 4}         | 7           | 2           | 5          |
| 6    | 110    | {2, 4}         | 6           | 3           | 3          |
| 7    | 111    | {3, 2, 4}      | 9           | 0           | 9          |

From the table above, the minimum absolute difference is `min = 1`. This minimum is achieved by the following divisions:

- Group 1: `{3, 2}` and Group 2: `{4}`
- Group 1: `{4}` and Group 2: `{3, 2}`

Therefore, the correct output for this example is `1`.

## Notes

- Nothing.
