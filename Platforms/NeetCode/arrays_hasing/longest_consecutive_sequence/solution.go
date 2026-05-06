package main

func LongestConsecutive(nums []int) int {
	freq := make(map[int]bool)

	for _, num := range nums {
		freq[num] = true
	}

	longest := 0
	for num := range freq {
		if !freq[num-1] {
			current := num
			length := 1

			for freq[current+1] {
				current++
				length++
			}

			if length > longest {
				longest = length
			}
		}
	}

	return longest
}
