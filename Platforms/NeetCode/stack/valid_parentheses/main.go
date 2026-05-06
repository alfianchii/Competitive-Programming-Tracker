package main

import "fmt"

func main() {
	// str := "([{}])"
	// str := "[(])"
	str := "["

	result := IsValid(str)

	fmt.Println(result)
}
