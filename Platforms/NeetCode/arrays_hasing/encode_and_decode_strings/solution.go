package main

import (
	"strconv"
	"strings"
)

type Solution struct{}

func (s *Solution) Encode(strs []string) string {
	var encodedStr strings.Builder

	for _, str := range strs {
		encodedStr.WriteString(strconv.Itoa(len(str)) + "#" + str)
	}

	return encodedStr.String()
}

func (s *Solution) Decode(encoded string) []string {
	arr := []string{}

	// 5#Hello
	// 0
	i := 0
	for i < len(encoded) {
		// 1
		j := i
		for encoded[j] != '#' { // encoded[j] = 5
			j++
		}
		length, _ := strconv.Atoi(encoded[i:j]) // 5
		i = j + 1                               // 2
		// encoded[2:7] = Hello
		arr = append(arr, encoded[i:i+length])
		i += length
	}
	return arr
}
