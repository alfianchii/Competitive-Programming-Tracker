package main

func main() {
	obj := Constructor()

	obj.Put(1, 1)
	obj.Put(2, 2)
	obj.Put(11, 11)

	obj.Get(1)
	obj.Get(2)
	obj.Get(11)

	obj.Remove(1)
	obj.Remove(2)
	obj.Remove(11)

	// obj.Get(1)
	// obj.Get(3)

	// obj.Put(2, 1)
	// obj.Get(2)

	// obj.Remove(2)
	// obj.Get(2)
}
