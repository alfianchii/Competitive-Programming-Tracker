# [USACO Speeding Ticket - Bronze, January 2015](https://usaco.org/index.php?page=viewproblem2&cpid=568)

## Problem Description

Bessie drives along a road that is **exactly 100 miles** long, but both the speed limit, and Bessie’s driving speed change throughout the journey. The road is divided into `N` segments, each with:

- a length (in miles)
- a speed limit
  Bessie’s trip is divided into `M` segments, each with:
- a length (in miles)
- a driving speed

Both sets of segments cover the same 100 miles.

The task is to determine the maximum amount Bessie exceeds the speed limit at any point.
If she never speeds, output `0`.

### Input

```bash
N M
length₁ limit₁
...
lengthₙ limitₙ
length₁ speed₁
...
lengthₘ speedₘ
```

Where:

- `1 <= N, M <= 100`
- Segment lengths sum to `100`
- Speed limits are between `1` and `100` mph

### Output

Print one integer: the maximum speed violation or `0` if Bessie never exceeds the limit.

### Example

**Input (`speeding.in`):**

```bash
3 3
40 75
50 35
10 45
40 76
20 30
40 40
```

**Output (`speeding.out`):**

```bash
5
```

**Explanation:**

| Mile Range | Speed Limit | Bessie’s Speed | Violation |
| ---------- | ----------- | -------------- | --------- |
| 0-39       | 75          | 76             | +1        |
| 40-59      | 35          | 30             | 0         |
| 60-89      | 35          | 40             | **+5**    |
| 90-99      | 45          | 40             | 0         |

The maximum speeding violation is 5 mph.

---

## Approach

This solution uses a two-pointer simulation to process overlapping segments.

1. Store road segments and Bessie’s segments separately.
2. Use two pointers: one for the road and one for Bessie’s driving.
3. For each overlap, compare Bessie’s speed with the road’s speed limit and track the maximum violation.
4. Consume miles from segments until all 100 miles are processed.

This avoids creating a 100-element array and works directly on the input segments.

## Notes

- Segment lengths do not necessarily align.
- A single segment may overlap multiple segments on the other side.
- The key idea is to always process the minimum remaining length of the two current segments.
