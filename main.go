package main

import (
	"fmt"

	"Desktop-Luau/luau-wrap"
)

func main() {
	fmt.Println("hello world")

	src := "print(1)"
	var bytecodeSize *int64
	luau.Luau_compile(src, int64(len(src)), nil, bytecodeSize)
}
