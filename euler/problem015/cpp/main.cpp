/*
 * Starting in the top left corner of a 2×2 grid, 
 * and only being able to move to the right and down, there are exactly 6 routes 
 * to the bottom right corner.
 *
 * How many such routes are there through a 20×20 grid?
 *
 *
*/
#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
using namespace std;

long double calculate_number_of_steps(long double grid_size, long double number_of_steps);
long double calculate_top(long double grid_size, long double number_of_steps);
long double calculate_bottom(long double grid_size);

int main(){

  long double grid_size = 20;

  long double number_of_steps = grid_size+grid_size;

  long double number_of_routes = calculate_number_of_steps(grid_size, number_of_steps);
  printf("%Lf\n", number_of_routes);


  return 0;
}

long double calculate_number_of_steps(long double grid_size, long double number_of_steps){
  long double top = calculate_top(grid_size, number_of_steps);
  long double bottom = calculate_bottom(grid_size);
  return top/bottom;

}

long double calculate_top(long double grid_size, long double number_of_steps){
  long double total = 1;
  for (int i = grid_size; i < number_of_steps; i++){
    total *= i;
  }
  return total;
}

long double calculate_bottom(long double grid_size){
  long double total = 1;
  for (int i = 1; i < grid_size; i++){
    total *= i;
  }
  return total;
}
