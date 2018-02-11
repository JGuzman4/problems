#include<iostream>
using namespace std;


int main(){

  int squares = 0;
  int squareSums = 0;
  for (int i = 1; i <= 100; i++){
    squares += i*i;
    squareSums += i;
  }
  squareSums *= squareSums;
  std::cout << squareSums-squares  << '\n';
  return 0;
}
