/*
 *
 * Euler discovered the remarkable quadratic formula:
 *
 * n2+n+41
 * It turns out that the formula will produce 40 primes for the consecutive 
 * integer values 0≤n≤39. However, when n=40,402+40+41=40(40+1)+41 is 
 * divisible by 41, and certainly when n=41,412+41+41 is clearly divisible by 41.
 *
 * The incredible formula n2−79n+1601 was discovered, which produces 80 primes 
 * for the consecutive values 0≤n≤79. The product of the coefficients, −79 and 1601, is −126479.
 *
 * Considering quadratics of the form:
 *
 * n2+an+b, where |a|<1000 and |b|≤1000
 *
 * where |n| is the modulus/absolute value of n
 * e.g. |11|=11 and |−4|=4
 * Find the product of the coefficients, a and b, for the quadratic expression 
 * that produces the maximum number of primes for consecutive values of n, starting with n=0.
 *
 *
*/
#include<fstream>
#include<utility>
#include<string> 
#include<vector> 
#include<set> 
#include<cmath>
#include<boost/multiprecision/gmp.hpp>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
using namespace std;
using namespace boost::multiprecision;

bool isPrime(long int n);
long int maxPrimes(long int a, long int b);

int main(int argc, char* argv[]){

  long int largest = 0;
  long int product = 0;

  for (long int a = -1000; a < 1000; a++){ 
    for (long int b = -1000; b < 1000; b++){ 
      int p = maxPrimes(a, b);
      if (p > largest){
        largest = p;
        product = a*b;
      }
    }
  }

  cout << product << endl;
  return 0;
} 

long int maxPrimes(long int a, long int b){
  long int n = 0;

  while (isPrime(abs(n*n+a*n+b))){
    n++;
  }
  return n;
}

bool isPrime(long int n){
  for (unsigned long int i = 2; i < n; i++){
    if (n%i == 0)
      return false;
  }
  return true;
}
