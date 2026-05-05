# [USACO Shell Game - Bronze, January 2019](https://usaco.org/index.php?page=viewproblem2&cpid=891)

## Problem Description

Bessie and Elsie play a version of the shell game with 3 shells.

- Bessie hides a pebble under one shell.
- Then she swaps shells multiple times.
- Elsie guesses the shell containing the pebble after each swap.

The goal is to determine the **maximum number of correct guesses** Elsie could have made, **without knowing the initial pebble position**.

### Input

- First line: `N` (1 ≤ N ≤ 100), number of swaps.
- Next `N` lines: three integers `a b g`:
  - `a` and `b`: shells to swap (1, 2, or 3)
  - `g`: Elsie's guess (1, 2, or 3)

### Output

- Single integer: maximum points Elsie could earn.

### Example

**Input (`shell.in`):**

```bash
3
1 2 1
3 2 1
1 3 1
```

**Output (`shell.out`):**

```bash
2
```

**Explanation:**

- Pebble starts under shell 1 -> 1 correct guess
- Pebble starts under shell 2 -> 2 correct guesses (maximum)
- Pebble starts under shell 3 -> 0 correct guesses

Maximum = 2.

---

## Approach

1. **Simulate all possible starting positions** (3 shells -> 3 possibilities).
2. Keep track of the **current shell positions**.
3. For each swap and guess:
   - Update shell positions.
   - Increment score for the shell at the guessed position.
4. Return the **maximum score** across the 3 starting positions.

## Notes

- `counter[i]` tracks score if pebble started under shell i.

- `shell_at_pos[g]` is used to simulate shell movement, no need to explicitly track the pebble.

- The approach efficiently simulates all starting positions in one pass.
