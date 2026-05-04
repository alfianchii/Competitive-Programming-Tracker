package NeetCode

type entry struct {
	key   int
	value int
}

type MyHashMap struct {
	buckets [][]entry
}

func Constructor() MyHashMap {
	buckets := make([][]entry, 1000)

	return MyHashMap{buckets}
}

func (this *MyHashMap) Put(key int, value int) {
	idx := this.getIdx(key)

	for i, el := range this.buckets[idx] {
		if el.key == key {
			this.buckets[idx][i].value = value
			return
		}
	}

	this.buckets[idx] = append(this.buckets[idx], entry{key, value})
}

func (this *MyHashMap) Get(key int) int {
	idx := this.getIdx(key)

	for _, el := range this.buckets[idx] {
		if el.key == key {
			return el.value
		}
	}

	return -1
}

func (this *MyHashMap) Remove(key int) {
	idx := this.getIdx(key)

	for i, el := range this.buckets[idx] {
		if el.key == key {
			this.buckets[idx] = append(this.buckets[idx][:i], this.buckets[idx][i+1:]...)
			return
		}
	}
}

func (this *MyHashMap) getIdx(key int) int {
	return key % len(this.buckets)
}
