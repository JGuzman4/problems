/*
 *
 * Pentagonal numbers are generated by the formula, Pn=n(3n−1)/2. 
 * The first ten pentagonal numbers are:
 *
 * 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, ...
 *
 * It can be seen that P4 + P7 = 22 + 70 = 92 = P8. However, their 
 * difference, 70 − 22 = 48, is not pentagonal.
 *
 * Find the pair of pentagonal numbers, Pj and Pk, for which their 
 * sum and difference are pentagonal and D = |Pk − Pj| is minimised; 
 * what is the value of D?
*/
#include<utility>
#include<string> 
#include<vector> 
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

unsigned long long pentagonalNumber(unsigned long long n);
bool isPentagonal(unsigned long long x);

int main(int argc, char* argv[]){

  unsigned long long best = 99999999;

  for (unsigned long long n = 2; n < 50000; n++){
    unsigned long long pn = pentagonalNumber(n);

    for (unsigned long long x = 1; x < n; x++){
      unsigned long long px = pentagonalNumber(x);
      
      unsigned long long sum = pn + px;
      unsigned long long difference = pn - px;

      if (isPentagonal(sum) && isPentagonal(difference) && difference < best)
        best = difference;
    }
  }

  cout << best << endl;

  return 0;
}

unsigned long long pentagonalNumber(unsigned long long n){
  return n * (3 * n - 1)/2;
}

bool isPentagonal(unsigned long long x){

  unsigned long long n = (1 + sqrt(24 * x + 1))/6;
  unsigned long long pn = n * (3 * n - 1)/2;
  return pn == x;
}