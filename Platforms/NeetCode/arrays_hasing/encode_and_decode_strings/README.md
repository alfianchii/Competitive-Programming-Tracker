# [Encode and Decode Strings](https://neetcode.io/problems/string-encode-and-decode)

## Problem

Design an algorithm to encode a list of strings to a string. The encoded string is then sent over the network and is decoded back to the original list of strings.
Machine 1 (sender) has the function:

```go
func (s *Solution) Encode(strs []string) string {
  // ... your code
  return encoded_string;
}
```

Machine 2 (receiver) has the function:

```go
func (s *Solution) Decode(encoded string) []string {
  //... your code
  return strs;
}
```

So Machine 1 does:

```go
string encoded_string = encode(strs);
```

and Machine 2 does:

```go
vector<string> strs2 = decode(encoded_string);
```

`strs2` in Machine 2 should be the same as `strs` in Machine 1.

Implement the `encode` and `decode` methods.

### Example 1

```go
Input: dummy_input = ["Hello","World"]
Output: ["Hello","World"]

```

Explanation:
Machine 1:
Codec encoder = new Codec();
String msg = encoder.encode(strs);
Machine 1 ---msg---> Machine 2

Machine 2:
Codec decoder = new Codec();
String[] strs = decoder.decode(msg);

### Example 2

```go
Input: dummy_input = [""]
Output: [""]
```

### Constraints

- `0 <= strs.length < 100`
- `0 <= strs[i].length < 200`
- `-10,000,000 <= target <= 10,000,000`
- `strs[i]` contains any possible characters out of `256` valid ASCII characters.

---

## Brute Force Intuition

A naive approach might be to join the strings using a special delimiter, like a comma `,` or a hash `#` (e.g., `neet#code#love#you`).

However, this breaks if the strings themselves contain the delimiter. Escaping the delimiter is possible, but it makes the logic overly complicated and slower to process.

## OK (Length Prefix)

To safely encode and decode regardless of the characters inside the strings, I can do prefix every string with its length followed by a delimiter (e.g., `#`). For example, the string `"Hello"` becomes `"5#Hello"`.

Encode:

1. Iterate through the array of strings.
2. For each string, append its length, a `#`, and the string itself to a string builder.

Decode:

1. Use a pointer `i` to iterate through the encoded string.
2. Use a second pointer `j` to find the `#` delimiter.
3. The characters between `i` and `j` represent the length of the next string. Parse this into an integer.
4. Extract the substring of that exact length immediately following the `#`.
5. Jump the `i` pointer forward by the length of the string to find the next length prefix.

## Complexity Analysis

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## Edge Cases

- Empty array `[]`
- Array with empty strings `["", ""]`
- Strings that naturally contain numbers and the `#` symbol (e.g., `"123#abc"`)
- Very long strings
