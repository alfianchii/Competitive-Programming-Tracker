package LeetCode

import "fmt"

type ListNode struct {
	Val  int
	Next *ListNode
}

var r1 []int

func reversedListNode(ln1 *ListNode) *ListNode {
	// 2, 4, 3, 10
	// ln1 = 2, 4, 3
	if ln1.Next == nil {
		r1 = append(r1, ln1.Val)
		return nil
	} else {
		// ln1.Next = 10
		reversedListNode(ln1.Next)
		// var nextLn = &ListNode{Val: ln1.Val}
		// fmt.Println(nextLn)
		r1 = append(r1, ln1.Val)
	}

	fmt.Println(ln1)
	return nil
}

func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	reversedListNode(l1)
	fmt.Println("==============")
	fmt.Println(r1)
	// fmt.Println(r1)
	// fmt.Println(r1.Next)
	// fmt.Println(r1.Next.Next)
	// fmt.Println(r1.Next.Next.Next)

	return nil
}
