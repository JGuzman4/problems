/*
 *
 * A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation 
 * of the digits 1, 2, 3 and 4. If all of the permutations are listed numerically or alphabetically, 
 * we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:
 *
 * 012   021   102   120   201   210
 *
 * What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
 *
*/
#include<iostream>
#include<fstream>
#include<utility>
#include<string> 
#include<vector> 
#include<set> 
#include<cmath>
#include<math.h>
#include<stdlib.h>
using namespace std;



int main(int argc, char* argv[]){

  string digits = "0123456789";
  unsigned int x, y, i, k, highest;

  cout << digits << endl;
  for (unsigned int j = 0; j < 999999; j++){
    for (k = 0; k < digits.length(); k++){
      if ((digits[k] - '0') < (digits[k+1] - '0')){
        highest = k;
      }
    }
    k = highest;
    for (i = k; i < digits.length(); i++){
      if ((digits[k] - '0') < (digits[i] - '0')){
        highest = i;
      }
    }
    i = highest;
    char tmp = digits[k];
    digits[k] = digits[i];
    digits[i] = tmp;
    for (x = k+1, y = digits.length()-1; x < y; x++, y--){
      char tmp = digits[x];
      digits[x] = digits[y];
      digits[y] = tmp;
    }
    cout << digits << endl;
    highest = 0;
  }

  return 0;
} 
