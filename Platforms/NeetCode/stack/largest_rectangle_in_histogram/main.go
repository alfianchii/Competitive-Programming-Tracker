package main

import (
	"fmt"
)

func main() {
	heights := []int{7, 1, 7, 2, 2, 4}

	result := LargestRectangleArea(heights)

	fmt.Println(result)
}
