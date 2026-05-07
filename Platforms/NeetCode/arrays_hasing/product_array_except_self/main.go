package main

import "fmt"

func main() {
	nums := []int{1, 2, 4, 6}
	// nums := []int{0, 0}

	result := ProductExceptSelf(nums)

	fmt.Println(result)
}
