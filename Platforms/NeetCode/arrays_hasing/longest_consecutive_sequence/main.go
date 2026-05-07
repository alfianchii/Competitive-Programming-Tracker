package main

import "fmt"

func main() {
	// nums := []int{2, 20, 4, 10, 3, 4, 5}
	// nums := []int{0, 3, 2, 5, 4, 6, 1, 1}
	// nums := []int{0, -1}
	nums := []int{9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6} // 3, 4, 5, 6, 7, 8, 9

	result := LongestConsecutive(nums)

	fmt.Println(result)
}
