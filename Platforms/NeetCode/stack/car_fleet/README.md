# [Car Fleet](https://neetcode.io/problems/car-fleet/)

## Problem

There are `n` cars traveling to the same destination on a one-lane highway.

You are given two arrays of integers `position` and `speed`, both of length `n`.

- `position[i]` is the position of the `ith car` (in miles)
- `speed[i]` is the speed of the `ith car` (in miles per hour)

The destination is at position `target` miles.

A car can not pass another car ahead of it. It can only catch up to another car and then drive at the same speed as the car ahead of it.

A car fleet is a non-empty set of cars driving at the same position and same speed. A single car is also considered a car fleet.

If a car catches up to a car fleet the moment the fleet reaches the destination, then the car is considered to be part of the fleet.

Return the number of different car fleets that will arrive at the destination.

### Example 1

```go
Input: target = 10, position = [1,4], speed = [3,2]
Output: 1
```

Explanation: The cars starting at 1 (speed 3) and 4 (speed 2) become a fleet, meeting each other at 10, the destination.

### Example 2

```go
Input: target = 10, position = [4,1,0,7], speed = [2,2,1,1]
Output: 3
```

Explanation: The cars starting at 4 and 7 become a fleet at position 10. The cars starting at 1 and 0 never catch up to the car ahead of them. Thus, there are 3 car fleets that will arrive at the destination. After sorting cars from closest to the target to farthest:

```go
position = [7,4,1,0]
speed    = [1,2,2,1]
time     = [3,3,4.5,10]
```

The cars at positions `7` and `4` become one fleet because both reach the target in `3` hours. The cars at positions `1` and `0` cannot catch up to the fleet ahead of them, so each becomes its own fleet.

### Constraints

- `n == position.length == speed.length`
- `1 <= n <= 1000`
- `0 < target <= 1000`
- `0 < speed[i] <= 100`
- `0 <= position[i] < target`
- All the values of `position` are unique

---

## Brute Force Intuition

N/A

## OK (Stack)

Use a stack to store the arrival times of fleets. First, pair each car's `position` and `speed`, then **sort** the cars by position from largest to smallest. This means I can process cars from front to back. For each car, calculate its time to reach the target. Then compare that time with the top of the stack.

## Complexity Analysis

- Time Complexity: `O(n log n)`
- Space Complexity: `O(n)`

## Edge Cases

- Only one car
- Cars with the same arrival time
- Arrival time is a decimal, so use `float64`, not integer division
