package main

import (
	"strconv"
)

type Stack struct {
	data []string
}

func (this *Stack) Push(val string) {
	this.data = append(this.data, val)
}

func (this *Stack) Pop() {
	this.data = this.data[:len(this.data)-1]
}

func (this *Stack) Top() string {
	return this.data[len(this.data)-1]
}

func (this *Stack) IsEmpty() bool {
	return len(this.data) == 0
}

func EvalRPN(tokens []string) int {
	stack := Stack{}
	symbols := map[string]bool{
		"+": true,
		"-": true,
		"*": true,
		"/": true,
	}

	for _, token := range tokens {
		if !symbols[token] {
			stack.Push(token)
		} else {
			top, _ := strconv.Atoi(stack.Top())
			right := top
			stack.Pop()

			res := 0
			for range 1 {
				left, _ := strconv.Atoi(stack.Top())
				if token == "+" {
					res = left + right
				}
				if token == "-" {
					res = left - right
				}
				if token == "*" {
					res = left * right
				}
				if token == "/" {
					res = left / right
				}

				stack.Pop()
			}

			stack.Push(strconv.Itoa(res))
		}
	}

	num, _ := strconv.Atoi(stack.Top())
	return num
}
