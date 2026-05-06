package main

type Stack struct {
	data []int
}

func (this *Stack) Push(value int) {
	this.data = append(this.data, value)
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

func DailyTemperatures(temperatures []int) []int {
	res := make([]int, len(temperatures))
	stack := Stack{}

	for currIdx, temp := range temperatures {
		for !stack.IsEmpty() && temp > temperatures[stack.Top()] {
			prevIdx := stack.Top()
			stack.Pop()

			res[prevIdx] = currIdx - prevIdx
		}

		stack.Push(currIdx)
	}

	return res
}
