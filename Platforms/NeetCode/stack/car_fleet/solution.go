package main

type Stack struct {
	data []float64
}

func (this *Stack) Push(val float64) {
	this.data = append(this.data, val)
}

func (this *Stack) Pop() {
	this.data = this.data[:len(this.data)-1]
}

func (this *Stack) Top() float64 {
	return this.data[len(this.data)-1]
}

func (this *Stack) IsEmpty() bool {
	return len(this.data) == 0
}

func bubbleSwap(arr []int, i, j int) {
	arr[i], arr[j] = arr[j], arr[i]
}

func bubbleSort(positions []int, speeds []int) {
	posLen := len(positions)

	for range posLen {
		for i := 0; i < posLen-1; i++ {
			if positions[i] < positions[i+1] {
				bubbleSwap(positions, i, i+1)
				bubbleSwap(speeds, i, i+1)
			}
		}
	}
}

func CarFleet(target int, positions []int, speeds []int) int {
	length := len(positions)
	timeFleets := Stack{}

	bubbleSort(positions, speeds)

	carFleet := 0
	for i := range length {
		time := float64(target-positions[i]) / float64(speeds[i])

		if timeFleets.IsEmpty() || time > timeFleets.Top() {
			timeFleets.Push(time)
			carFleet++
		}
	}

	return carFleet
}
