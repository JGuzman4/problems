package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func getMarioLocation() {
}

func readMap(n int) [][]rune {
	grid := make([][]rune, n)
	for i := 0; i < n; i++ {
		grid[i] = make([]rune, n)
	}
	reader := bufio.NewReader(os.Stdin)
	for i := 0; i < n; i++ {
		line, _ := reader.ReadString('\n')
		for j, char := range line {
			if char != '\n' {
				grid[i][j] = char
			}
		}
	}
	return grid
}

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
	grid := readMap(n)
	for _, row := range grid {
		fmt.Println(string(row))
	}
}
