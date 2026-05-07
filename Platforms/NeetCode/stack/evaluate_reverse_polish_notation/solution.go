package main

import "fmt"

type Stack struct {
	data []int
}

func (this *Stack) Push(val int) {
	this.data = append(this.data, val)
}

func (this *Stack) Pop() {
	this.data = this.data[:len(this.data)-1]
}

func (this *Stack) Top() int {
	return this.data[len(this.data)-1]
}

func (this *Stack) IsEmpty() bool {
	return len(this.data) == 0
}

func EvalRPN(tokens []string) int {
	// stack := Stack{}
	symbols := map[rune]bool{
		'+': true,
		'-': true,
		'*': true,
		'/': true,
	}

	fmt.Println(symbols['1'])
	// for idx, token := range tokens {

	// }

	return 1
}
