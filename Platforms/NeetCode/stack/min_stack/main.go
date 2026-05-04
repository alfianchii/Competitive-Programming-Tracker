package NeetCode

import "fmt"

func main() {
	minStack := Constructor()

	minStack.Push(1)
	minStack.Push(2)
	minStack.Push(0)
	fmt.Println(minStack.GetMin())
	minStack.Pop()
	fmt.Println(minStack.Top())
	fmt.Println(minStack.GetMin())
}
