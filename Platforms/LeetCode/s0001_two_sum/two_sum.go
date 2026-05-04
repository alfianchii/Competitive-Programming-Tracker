package LeetCode

// Brute force way
// Time complexity: O(n²)
// Space complexity: O(1)
func twoSumQuadratic(nums []int, target int) []int {
	for i := range nums {
		for j := i + 1; j < len(nums); j++ {
			if nums[i]+nums[j] == target {
				return []int{i, j}
			}
		}
	}
	return nil
}

// Smarter way
// Time complexity: O(n)
// Space complexity: O(n)
func twoSumLinear(nums []int, target int) []int {
	var seen map[int]int = make(map[int]int)

	for i, num := range nums {
		var complement int = target - num
		if j, ok := seen[complement]; ok {
			return []int{j, i}
		}

		seen[num] = i
	}
	return nil
}
