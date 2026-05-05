# [USACO Mixing Milk - Bronze, December 2018](https://usaco.org/index.php?page=viewproblem2&cpid=855)

## Problem Description

Farmer John has three buckets of milk, each with a fixed capacity and a current amount of milk.
He repeatedly pours milk between the buckets in a cyclic order:

```bash
Bucket 1 -> Bucket 2
Bucket 2 -> Bucket 3
Bucket 3 -> Bucket 1
And so forth...
```

This process is performed exactly 100 times. When pouring from bucket `a` into bucket `b`, milk is poured until either:

- bucket `a` becomes empty, or
- bucket `b` becomes full.

The task is to determine how much milk remains in each bucket after 100 pours.

### Input

Three lines, one for each bucket: `capacity_i milk_i`. Where:

- `capacity_i` = maximum capacity of bucket `i`
- `milk_i` = initial amount of milk in bucket `i`

### Output

Print three lines, each containing the final amount of milk in Bucket 1, 2, and 3.

### Example

**Input (`mixmilk.in`):**

```bash
10 3
11 4
12 5
```

**Output (`mixmilk.out`):**

```bash
0
10
2
```

**Explanation:**

Initial state is `[3, 4, 5]`. After several pours, the configuration enters a cycle. After 100 total pours, the final milk amounts are:

```bash
Bucket 1: 0
Bucket 2: 10
Bucket 3: 2
```

---

## Approach

This is a pure simulation problem:

- Store bucket capacities in an array and current milk amounts in another array
- Repeat 100 iterations; pour from bucket `i % 3` into bucket `(i + 1) % 3`
- For each pour, determine how much milk can be transferred and update both buckets accordingly
- Last, output the final milk amounts

## Notes

- The modulo operator (`%`) is used to cycle through buckets.

- No advanced data structures are needed.

- This problem reinforces simulation, arrays/vectors, and careful implementation of rules.
