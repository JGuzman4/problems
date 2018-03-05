/*
 *
 * The following iterative sequence is defined for the set of positive integers:
 *   n → n/2 (n is even)
 *   n → 3n + 1 (n is odd)
 * Using the rule above and starting with 13, we generate the following sequence:
 *
 * 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
 *
 * Which starting number, under one million, produces the longest chain?
 *
 *
*/
#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
using namespace std;


long int isEven(long int n);
long int isOdd(long int n);


int main(){


  long int largestChain = 0;
  long int currentChain = 0;
  long int currentChainNumber = 0;
  long int largestChainNumber = 0;
  for (long int i = 500; i < 1000000; i++) {
    currentChain = 0;
    currentChainNumber = i;
    while (currentChainNumber != 1) {
      if (currentChainNumber%2 == 0){
        currentChainNumber = isEven(currentChainNumber);
      }
      else {
        currentChainNumber = isOdd(currentChainNumber);
      }
      currentChain++;
      //cout << currentChainNumber << "->";
    }
    //cout << endl << endl;
    if (currentChain > largestChain){
      largestChain = currentChain;
      largestChainNumber = i;
    }
  }
  cout << largestChainNumber << endl;

  return 0;
}

long int isEven(long int n){
  return n/2;
};
long int isOdd(long int n){
  return (3*n)+1;
};
