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


string number = "";

void readGrid(int grid[20][20]);
void printGrid(int grid[20][20]);

unsigned long int thirteenProduct(int index);

int main(){

  unsigned long int greatest = 0;
  int grid[20][20];

  readGrid(grid);
  printGrid(grid);


  //for (int i = 0; i < number.length()-13; i++){
    //if (thirteenProduct(i) > greatest)
      //greatest = thirteenProduct(i);
  //}

  //cout << greatest << endl;
  return 0;
}

void readGrid(int grid[20][20]){
  int n = 0;
  for (int i = 0; i < 20; i++){
    for (int j = 0; j < 20; j++){
      cin >> n;
      grid[i][j] = n;
    }
  }
}

void printGrid(int grid[20][20]){
  for (int i = 0; i < 20; i++){
    for (int j = 0; j < 20; j++){
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }
}

unsigned long int thirteenProduct(int index){
  unsigned long int product = (number[index] - '0');
  for (int i = index+1; i < index + 13; i++){
    product *= (number[i] - '0');
  }
  return product;
}
