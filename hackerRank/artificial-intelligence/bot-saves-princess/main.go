package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	nString, err := reader.ReadString('\n')
	if err != nil {
		fmt.Println("An error occured while reading input. Please try again", err)
		return
	}

	n, err := strconv.Atoi(strings.TrimSuffix(nString, "\n"))
	if err != nil {
		fmt.Println("could not convert string to int", err)
		return
	}
	var marioLoc [2]int
	var peachLoc [2]int
	for i := 0; i < n; i++ {
		line, _ := reader.ReadString('\n')
		for j, char := range line {
			if char == 'm' {
				marioLoc[0] = i
				marioLoc[1] = j
			}
			if char == 'p' {
				peachLoc[0] = i
				peachLoc[1] = j
			}
		}
	}

	fmt.Println("mario location: ", marioLoc[0], ", ", marioLoc[1])
	fmt.Println("peach location: ", peachLoc[0], ", ", peachLoc[1])
	for marioLoc[0] > peachLoc[0] {
		fmt.Println("UP")
		marioLoc[0] = marioLoc[0] - 1
	}
	for marioLoc[0] < peachLoc[0] {
		fmt.Println("DOWN")
		marioLoc[0] = marioLoc[0] + 1
	}
	for marioLoc[1] > peachLoc[1] {
		fmt.Println("LEFT")
		marioLoc[1] = marioLoc[1] - 1
	}
	for marioLoc[1] < peachLoc[1] {
		fmt.Println("RIGHT")
		marioLoc[1] = marioLoc[1] + 1
	}
}
