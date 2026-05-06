package main

func RemoveElement(nums []int, val int) int {
	k := 0

	for i := range nums {
		if nums[i] != val {
			nums[k] = nums[i]
			k++
		}
	}

	return k
}
