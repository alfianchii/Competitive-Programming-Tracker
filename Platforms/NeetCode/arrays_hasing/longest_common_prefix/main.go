package main

import "fmt"

func main() {
	// strs := []string{"bat", "bag", "bank", "band"}
	// strs := []string{"dance", "dag", "danger", "damage"}
	// strs := []string{"neet", "feet"}
	strs := []string{"flower", "flow", "flight"}

	result := LongestCommonPrefix(strs)

	fmt.Println(result)
}
