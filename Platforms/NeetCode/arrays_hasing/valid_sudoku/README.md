# [Valid Sudoku](https://neetcode.io/problems/valid-sudoku)

## Problem

You are given a `9 x 9` Sudoku board board. A Sudoku board is valid if the following rules are followed:

1. Each row must contain the digits `1-9` without duplicates.
2. Each column must contain the digits `1-9` without duplicates.
3. Each of the nine `3 x 3` sub-boxes of the grid must contain the digits `1-9` without duplicates.
4. Return `true` if the Sudoku board is valid, otherwise return `false`.

Note: A board does not need to be full or be solvable to be valid.

### Example 1

[![Example 1](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/0be40c5d-2d18-42b8-261b-13ca50de4100/public)]

```go
Input:
[
 ['1','2','.','.','3','.','.','.','.'],
 ['4','.','.','5','.','.','.','.','.'],
 ['.','9','.','.','.','.','6','.','.'],
 ['5','.','.','.','6','.','.','.','4'],
 ['.','.','.','8','.','3','.','.','5'],
 ['7','.','.','.','2','.','.','.','6'],
 ['.','.','.','.','.','.','2','.','.'],
 ['.','.','.','4','1','9','.','.','8'],
 ['.','.','.','.','8','.','.','7','9']
]
Output: true
```

### Example 2

```go
Input: board =
[['1','2','.','.','3','.','.','.','.'],
 ['4','.','.','5','.','.','.','.','.'],
 ['.','9','1','.','.','.','.','.','3'],
 ['5','.','.','.','6','.','.','.','4'],
 ['.','.','.','8','.','3','.','.','5'],
 ['7','.','.','.','2','.','.','.','6'],
 ['.','.','.','.','.','.','2','.','.'],
 ['.','.','.','4','1','9','.','.','8'],
 ['.','.','.','.','8','.','.','7','9']]
Output: false
```

Explanation: There are two 1's in the top-left 3x3 sub-box.

### Constraints

- `board.length == 9`
- `board[i].length == 9`
- `board[i][j]` is a digit `1-9` or `'.'`.

---

## Brute Force Intuition

I would:

- Scan each **row** and check for duplicates
- Scan each **column** and check for duplicates
- Scan each **3x3 box** and check for duplicates

To do this efficiently in code, I need a way to remember which digits I have already seen.

(Actually this naturally leads to hash maps (sets)☝🏻🤓)

Initial approach:

- Reuse a map for each row
- Reuse a map for each column
- Manually iterate through 3×3 boxes with index manipulation

While this can work, it quickly becomes hard to reason about, easy to introduce indexing bugs, and difficult to maintain or extend.

- Time Complexity: `O(n²)`
- Space Complexity: `O(n)`

## OK (Hash Set)

I can use three arrays of hash maps instead:

- `rows[i]` -> digits seen in row `i`
- `cols[j]` -> digits seen in column `j`
- `boxes[k]` -> digits seen in 3×3 box `k`

Each cell `(r, c)` belongs to a box and this uniquely maps each cell to one of the 9 sub-boxes:

```go
boxIndex := (r / 3) * 3 + (c / 3)
```

## Complexity Analysis

- Time Complexity: `O(1)`
- Space Complexity: `O(1)`

## Edge Cases

- Completely empty board
