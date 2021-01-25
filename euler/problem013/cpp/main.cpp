/*
 *
 * Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
 *
 *
 *
*/
#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
using namespace std;


void readGrid(long double grid[100]);
void printGrid(long double grid[100]);
long double addNumbers(long double grid[100]);

int main(){


  long double grid[100];


  readGrid(grid);
//  printGrid(grid);
  printf("%Lf60.0\n", addNumbers(grid));

  return 0;
}

void readGrid(long double grid[100]){
  long double n;
  for (int i = 0; i < 100; i++){
    cin >> n;
    grid[i] = n - '0';
  }
}

void printGrid(long double grid[100]){
  for (int i = 0; i < 100; i++){
    cout << grid[i] << endl;
  }
}

long double addNumbers(long double grid[100]){
  long double sum = 0;
  for (int i = 0; i < 100; i++) {
    sum += grid[i];
  }
  return sum;
}
