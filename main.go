package main

import (
	"fmt"

	"Desktop-Luau/adder"
)

func main() {
	a := adder.NewAdder()
	defer adder.DeleteAdder(a)

	for i := range 10 {
		a.Add(i)
		fmt.Printf("value %d\n", a.Get())
	}
}
