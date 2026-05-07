package main

func GetConcatenation(nums []int) []int {
	numsLength := len(nums)
	res := make([]int, numsLength*2)

	for i, num := range nums {
		res[i] = num
		res[(numsLength)+i] = num
	}

	return res
}
