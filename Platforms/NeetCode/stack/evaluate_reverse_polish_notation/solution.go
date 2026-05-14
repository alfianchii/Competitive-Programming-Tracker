package main

import "strconv"

type Stack struct {
	data []int
}

func (this *Stack) Push(val int) {
	this.data = append(this.data, val)
}

func (this *Stack) Pop() int {
	top := this.Top()
	this.data = this.data[:len(this.data)-1]
	return top
}

func (this *Stack) Top() int {
	return this.data[len(this.data)-1]
}

func (this *Stack) IsEmpty() bool {
	return len(this.data) == 0
}

func EvalRPN(tokens []string) int {
	stack := Stack{}

	for _, token := range tokens {
		switch token {
		case "+", "-", "*", "/":
			right := stack.Pop()
			left := stack.Pop()

			res := 0
			switch token {
			case "+":
				res = left + right
			case "-":
				res = left - right
			case "*":
				res = left * right
			case "/":
				res = left / right
			}

			stack.Push(res)
		default:
			num, _ := strconv.Atoi(token)
			stack.Push(num)
		}
	}

	return stack.Pop()
}
