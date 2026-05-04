package NeetCode

func LongestCommonPrefix(strs []string) string {
	if len(strs) == 0 {
		return ""
	}

	first := strs[0]

	for i, ch := range first {
		for _, s := range strs {
			if i >= len(s) || s[i] != byte(ch) {
				return first[:i]
			}
		}
	}

	return first
}
