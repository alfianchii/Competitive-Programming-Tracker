# [CodeForces Maximum Distance - Easy](https://codeforces.com/gym/102951/problem/A)

## Problem Description

Given N points on a 2D plane, each with integer coordinates (Xi, Yi). Then compute the maximum squared Euclidean distance between any pair of distinct points. The squared distance between two points (X1, Y1) and (X2, Y2) is defined as: (X1 - X2)^2 + (Y1 - Y2)^2. Output the maximum such value.

### Input

- First line: an integer `N`
- `1 <= N <= 100`
- Next line: `N` integers (the x-coordinates)
- Next line: `N` integers (the y-coordinates)

### Output

A single integer, which is the maximum squared distance between any two points.

### Example

**Input (`max.in`):**

```bash
3
0 1 4
0 2 6
```

**Output (`max.out`):**

```bash
52
```

**Explanation:**

The farthest points are (0, 0) and (4, 6). Squared distance is `(4 - 0)^2 + (6 - 0)^2 = 16 + 36 = 52`.

---

## Approach

This is a brute-force simulation problem. Since `N <= 100`, we can safely check every pair of points. For each pair, compute the squared distance and keep track of the maximum value seen so far.

## Notes

- Avoid storing distances as `double` and squaring floats and casting to `int`
- Use integers instead
- Avoid `sqrt`, `pow`, and floating-point math unless required
