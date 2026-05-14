package main

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

func LargestRectangleArea(arr []int) int {
	maxArea := 0
	stack := Stack{}
	n := len(arr)

	for i := 0; i <= n; i++ {
		currentHeight := 0
		if i < n {
			currentHeight = arr[i]
		}

		for !stack.IsEmpty() && currentHeight < arr[stack.Top()] {
			topIdx := stack.Top()
			stack.Pop()
			height := arr[topIdx]

			width := i
			if !stack.IsEmpty() {
				width = i - stack.Top() - 1
			}

			area := height * width
			maxArea = max(maxArea, area)
		}

		stack.Push(i)
	}

	return maxArea
}
