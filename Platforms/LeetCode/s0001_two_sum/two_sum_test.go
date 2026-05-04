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
	nums   []int
	target int
}

type Answer struct {
	Result []int
}

type Func struct {
	Name   string
	TwoSum func([]int, int) []int
}

func TestProblem(t *testing.T) {
	var funcs []Func = []Func{
		{
			Name:   "Quadratic",
			TwoSum: twoSumQuadratic,
		},
		{
			Name:   "Constant",
			TwoSum: twoSumLinear,
		},
	}

	var qs []Question = []Question{
		{
			Params{[]int{3, 2, 4}, 6},
			Answer{[]int{1, 2}},
		},
		{
			Params{[]int{2, 7, 11, 15}, 9},
			Answer{[]int{0, 1}},
		},
		{
			Params{[]int{3, 3}, 6},
			Answer{[]int{0, 1}},
		},
	}

	fmt.Printf("========================Leetcode Problem 1========================\n")

	for _, testFunc := range funcs {
		fmt.Println("------------------" + testFunc.Name + "------------------")
		for _, q := range qs {
			a, p := q.Answer, q.Params

			var r []int = testFunc.TwoSum(p.nums, p.target)
			var isEqual bool = reflect.DeepEqual(a.Result, r)

			if isEqual {
				fmt.Printf("【input】: %v\n【output】: %v\n\n", p, r)
			} else {
				t.Error("Failed of Two Sum (" + testFunc.Name + ") problem...")
			}
		}
	}
}
