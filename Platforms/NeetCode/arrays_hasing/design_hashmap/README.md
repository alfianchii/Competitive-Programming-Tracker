# [Design HashMap](https://neetcode.io/problems/design-hashmap)

## Problem

Design a HashMap without using any built-in hash table libraries.

Implement the `MyHashMap` class:

- `MyHashMap()` initializes the object with an empty map.
- `void put(int key, int value)` inserts a `(key, value)` pair into the HashMap. If the `key` already exists in the map, update the corresponding `value`.
- `int get(int key)` returns the `value` to which the specified `key` is mapped, or `-1` if this map contains no mapping for the `key`.
- `void remove(key)` removes the `key` and its corresponding `value` if the map contains the mapping for the `key`.

### Example 1

```go
Input: ["MyHashMap", "put", "put", "get", "get", "put", "get", "remove", "get"]
[[], [1, 1], [2, 2], [1], [3], [2, 1], [2], [2], [2]]
Output: [null, null, null, 1, -1, null, 1, null, -1]
```

Explanation:

```go
MyHashMap myHashMap = new MyHashMap();
myHashMap.put(1, 1); // The map is now [[1,1]]
myHashMap.put(2, 2); // The map is now [[1,1], [2,2]]
myHashMap.get(1); // return 1, The map is now [[1,1], [2,2]]
myHashMap.get(3); // return -1 (i.e., not found), The map is now [[1,1], [2,2]]
myHashMap.put(2, 1); // The map is now [[1,1], [2,1]] (i.e., update the existing value)
myHashMap.get(2); // return 1, The map is now [[1,1], [2,1]]
myHashMap.remove(2); // remove the mapping for 2, The map is now [[1,1]]
myHashMap.get(2); // return -1 (i.e., not found), The map is now [[1,1]]
```

### Constraints

- `0 <= key, value <= 1,000,000`
- At most 10,000 calls will be made to put, get, and remove.

---

## Brute Force Intuition

Since the constraints say `0 <= key <= 1,000,000`, I can use an array where the index is the key. If a key does not exist, store `-1`. Well, even tho this prevents collisions, array access is `O(1)`, and extremely simple logic, but it uses a lot of memory regardless of how many keys are actually used.

- Time Complexity: `O(1)`
- Space Complexity: `O(1000000)`

## OK

The key idea is use a fixed number of buckets, hash the key to choose a bucket, each bucket stores a list of `(key, value)` pairs, and handle collisions by chaining.

## Complexity Analysis

- Time Complexity: `O(1)`
- Space Complexity: `O(n)`

## Edge Cases

- Updating an existing key
- Removing a key that doesn’t exist
- Getting a key that was never inserted
- Multiple keys hashing to the same bucket (collisions)
