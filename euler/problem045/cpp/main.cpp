/*
 *
 * Triangle, pentagonal, and hexagonal numbers are generated by the following formulae:
 *
 * Triangle         Tn=n(n+1)/2        1, 3, 6, 10, 15, ...
 * Pentagonal       Pn=n(3n−1)/2       1, 5, 12, 22, 35, ...
 * Hexagonal        Hn=n(2n−1)         1, 6, 15, 28, 45, ...
 * It can be verified that T285 = P165 = H143 = 40755.
 *
 * Find the next triangle number that is also pentagonal and hexagonal.
*/
#include<utility>
#include<string> 
#include<vector> 
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

bool isPentagonal(unsigned long long x);


int main(int argc, char* argv[]){

  unsigned long long result = 0;
  int i = 143;
   
  while (true) {
    i++;
    result = i * (2 * i - 1);
    if (isPentagonal(result)) {
      break;
    }
  }
  cout << result << endl;

  return 0;
}

bool isPentagonal(unsigned long long x){

  unsigned long long n = (1 + sqrt(24 * x + 1))/6;
  unsigned long long pn = n * (3 * n - 1)/2;
  return pn == x;
}
