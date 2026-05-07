package main

func ProductExceptSelf(nums []int) []int {
	n := len(nums)
	res := make([]int, n)

	prefix := 1
	for i := range n { // 4
		// 1, 1, 2, 8
		res[i] = prefix
		prefix *= nums[i] // 8 * 6 = 48
	}

	suffix := 1
	for i := n - 1; i >= 0; i-- { // 0
		// 1, 2, 4, 6
		// 48, 24, 12, 8
		res[i] *= suffix  // res[0] = res[0] * suffix -> 1 * 48 = 48
		suffix *= nums[i] // 24 * 2 = 48
	}

	return res
}
