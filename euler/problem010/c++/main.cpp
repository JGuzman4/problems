/*
 *
 * Find the sum of all the primes below two million.
 *
 *
 *
*/
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(unsigned long int n);

int main(int argc, char const *argv[]) {

  unsigned long int sum = 0;
  for (unsigned long int i = 2; i < 2000000; i++){
    if (isPrime(i))
      sum += i;
  }
  cout << sum << endl;

  return 0;
}

bool isPrime(unsigned long int n){
  for (unsigned long int i = 2; i < n; i++){
    if (n%i == 0)
      return false;
  }
  return true;
}
