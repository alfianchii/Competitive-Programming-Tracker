package main

func GroupAnagrams(strs []string) [][]string {
	groups := make(map[[26]int][]string)

	for _, s := range strs {
		var count [26]int
		for i := 0; i < len(s); i++ {
			count[s[i]-'a']++
		}

		groups[count] = append(groups[count], s)
	}

	res := make([][]string, 0, len(groups))
	for _, group := range groups {
		res = append(res, group)
	}

	return res
}
