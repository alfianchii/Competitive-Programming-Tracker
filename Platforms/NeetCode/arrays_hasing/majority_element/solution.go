package main

func MajorityElement(nums []int) int {
	freq := make(map[int]int)

	highestFreq := 0
	highestNum := 0
	for _, num := range nums {
		freq[num]++
		if freq[num] > highestFreq {
			highestFreq = freq[num]
			highestNum = num
		}
	}

	return highestNum
}
