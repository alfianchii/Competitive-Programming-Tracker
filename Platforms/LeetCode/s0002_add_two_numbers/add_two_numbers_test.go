package LeetCode

import (
	"fmt"
	"reflect"
	"testing"
)

type Question struct {
	Params
	Answer
}

type Params struct {
	l1 *ListNode
	l2 *ListNode
}

type Answer struct {
	Result *ListNode
}

type Func struct {
	Name          string
	AddTwoNumbers func(*ListNode, *ListNode) *ListNode
}

func TestProblme(t *testing.T) {
	var funcs []Func = []Func{
		{
			"Quadratic",
			addTwoNumbers,
		},
	}

	var qs []Question = []Question{
		{
			Params{
				l1: &ListNode{Val: 2, Next: &ListNode{Val: 4, Next: &ListNode{Val: 3, Next: &ListNode{Val: 10}}}},
				l2: &ListNode{Val: 5, Next: &ListNode{Val: 6, Next: &ListNode{Val: 4}}},
			},
			Answer{&ListNode{Val: 7, Next: &ListNode{Val: 0, Next: &ListNode{Val: 8}}}},
		},
	}

	for _, testFunc := range funcs {
		fmt.Println("------------------" + testFunc.Name + "------------------")

		for _, q := range qs {
			p, a := q.Params, q.Answer

			var r *ListNode = testFunc.AddTwoNumbers(p.l1, p.l2)
			var isEqual bool = reflect.DeepEqual(r, a.Result)

			if isEqual {
				fmt.Printf("【input】: %v\n【output】: %v\n\n", p, r)
			} else {
				t.Error("Failed of Two Sum (" + testFunc.Name + ") problem...")
			}
		}
	}
}
