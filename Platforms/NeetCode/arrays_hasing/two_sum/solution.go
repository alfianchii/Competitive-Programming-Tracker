package main

func TwoSum(nums []int, target int) []int {
	seen := make(map[int]int)

	for i, num := range nums {
		complement := target - num

		if index, exists := seen[complement]; exists {
			return []int{index, i}
		}

		seen[num] = i
	}

	return nil
}
