/*
	To compile and run, in the terminal, type:
		go run main_go.go
*/

package main

import "fmt"

func main() {
	var myArray = [3]int{1,3,5}

	fmt.Println(myArray[0]) // Prints 1
	fmt.Println(myArray[1]) // Prints 3
	fmt.Println(myArray[2]) // Prints 5
	// fmt.Println(myArray[3]) // ERROR: invalid argument: index 3 out of bounds
}