package main

import "fmt"

func main() {
	tokens := []string{"1", "2", "+", "3", "*", "4", "-"}

	result := EvalRPN(tokens)

	fmt.Println(result)
}
