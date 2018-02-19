/*
 *
 * What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the 20×20 grid?
 *
 *
 *
*/
#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
using namespace std;



void readGrid(unsigned long int grid[20][20]);
void printGrid(unsigned long int grid[20][20]);
unsigned long int upDown(unsigned long int i, unsigned long int j, unsigned long int grid[20][20]);
unsigned long int leftRight(unsigned long int i, unsigned long int j, unsigned long int grid[20][20]);
unsigned long int diagonally1(unsigned long int i, unsigned long int j, unsigned long int grid[20][20]);
unsigned long int diagonally2(unsigned long int i, unsigned long int j, unsigned long int grid[20][20]);


int main(){

  unsigned long int greatest = 0;
  unsigned long int grid[20][20];

  readGrid(grid);
  printGrid(grid);

  for (int i = 0; i < 16; i++){
    for (int j = 0; j < 16; j++){
      if (upDown(i, j, grid) > greatest)
        greatest = upDown(i, j, grid);
      if (leftRight(i, j, grid) > greatest)
        greatest = leftRight(i, j, grid);
      if (diagonally1(i, j, grid) > greatest)
        greatest = diagonally1(i, j, grid);
      if (diagonally2(i, j, grid) > greatest)
        greatest = diagonally2(i, j, grid);
    }
  }



  cout << greatest << endl;
  return 0;
}

void readGrid(unsigned long int grid[20][20]){
  int n = 0;
  for (int i = 0; i < 20; i++){
    for (int j = 0; j < 20; j++){
      cin >> n;
      grid[i][j] = n;
    }
  }
}

void printGrid(unsigned long int grid[20][20]){
  for (int i = 0; i < 20; i++){
    for (int j = 0; j < 20; j++){
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }
}


unsigned long int upDown(unsigned long int i, unsigned long int j, unsigned long int grid[20][20]){
  return grid[i+3][j]*grid[i+2][j]*grid[i+1][j]*grid[i][j];
}
unsigned long int leftRight(unsigned long int i, unsigned long int j, unsigned long int grid[20][20]){
  return grid[i][j+3]*grid[i][j+2]*grid[i][j+1]*grid[i][j];
}
unsigned long int diagonally1(unsigned long int i, unsigned long int j, unsigned long int grid[20][20]){
  return grid[i+3][j+3]*grid[i+2][j+2]*grid[i+1][j+1]*grid[i][j];
}
unsigned long int diagonally2(unsigned long int i, unsigned long int j, unsigned long int grid[20][20]){
  return grid[i][j+3]*grid[i+1][j+2]*grid[i+2][j+1]*grid[i+3][j];
}
