package main

import "fmt"

func main() {
	target := 10
	positions := []int{4, 1, 0, 7}
	speeds := []int{2, 2, 1, 1}

	result := CarFleet(target, positions, speeds)

	fmt.Println(result)
}
