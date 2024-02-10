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
	rcString, _ := reader.ReadString('\n')

	rcString = strings.TrimSuffix(rcString, "\n")
	rc := strings.Fields(rcString)
	row, _ := strconv.Atoi(rc[0])
	col, _ := strconv.Atoi(rc[1])

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
	marioLoc[0] = row
	marioLoc[1] = col
	if marioLoc[0] > peachLoc[0] {
		fmt.Println("UP")
		marioLoc[0] = marioLoc[0] - 1
	} else if marioLoc[0] < peachLoc[0] {
		fmt.Println("DOWN")
		marioLoc[0] = marioLoc[0] + 1
	} else if marioLoc[1] > peachLoc[1] {
		fmt.Println("LEFT")
		marioLoc[1] = marioLoc[1] - 1
	} else if marioLoc[1] < peachLoc[1] {
		fmt.Println("RIGHT")
		marioLoc[1] = marioLoc[1] + 1
	}
}
