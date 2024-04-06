package main

import "fmt"

/*
#cgo CFLAGS: -I. -Igcc11include
#cgo LDFLAGS: -lstdc++ -Lluau/build/release -Lgcc11include -lluauast -lluaucompiler -lluauvm

#include "bridge.h"
*/
import "C"

func main() {
	fmt.Println("hello world")

	source := "print(1)"

	// char* bytecode = luau_compile(source, strlen(source), NULL, &bytecodeSize);

	bytecode := C.my_luau_compile(C.CString(source), C.ulong(len(source)), nil, nil)

	fmt.Println(bytecode)
}
