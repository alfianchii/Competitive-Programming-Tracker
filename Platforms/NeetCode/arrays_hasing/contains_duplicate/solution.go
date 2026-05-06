package main

func HasDuplicate(nums []int) bool {
	freq := make(map[int]int)

	for _, num := range nums {
		if _, exists := freq[num]; exists {
			return true
		}
		freq[num]++
	}

	return false
}
