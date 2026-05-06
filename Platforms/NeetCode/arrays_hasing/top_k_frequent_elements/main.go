package main

import "fmt"

func main() {
	nums := []int{1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3}
	// nums := []int{1, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2}
	// nums := []int{1, 2, 2, 3, 3, 3}
	// nums := []int{7, 7}
	// nums := []int{1, 1, 1, 2, 2, 3}
	// nums := []int{1, 1, 2, 2, 3, 3}
	uniqueTotal := 2

	result := TopKFrequent(nums, uniqueTotal)

	fmt.Println(result)
}
