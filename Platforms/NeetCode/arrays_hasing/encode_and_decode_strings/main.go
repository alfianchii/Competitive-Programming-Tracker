package main

import "fmt"

func main() {
	s := &Solution{}
	strs := []string{"Hello", "World", "iyh"}
	// strs := []string{""}
	// strs := []string{"", ""}
	// strs := []string{}
	// strs := []string{"we", "say", ":", "yes", "!@#$%^&*()"}

	encodedStr := s.Encode(strs)
	decodedStr := s.Decode(encodedStr)

	fmt.Println(encodedStr)
	fmt.Println(decodedStr)
}
