/*
 *
 * The number, 197, is called a circular prime because all 
 * rotations of the digits: 197, 971, and 719, are themselves prime.
 *
 * There are thirteen such primes below 100: 
 * 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.
 *
 * How many circular primes are there below one million?
 *
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

int countCircularPrimes(int limit);
bool isPrime(int n);
bool isCircular(int n);

int main(int argc, char* argv[]){

  int limit = 1000000;
  cout << countCircularPrimes(limit) << endl;

  return 0;
} 

int countCircularPrimes(int limit){

  int count = 0;

  for (int i = 2; i < limit; i++){
    if (isCircular(i))
      count++;
  }

  return count;
}

bool isPrime(int n){
  for (unsigned long int i = 2; i < n; i++){
    if (n%i == 0)
      return false;
  }
  return true;
}

bool isCircular(int n){

  if (isPrime(n) == false)
    return false;

  string s = to_string(n);

  for (unsigned int i = 0; i < s.length(); i++){
    rotate(s.begin(), s.begin()+1, s.end());
    if (isPrime(stoi(s)) == false)
      return false;
  }

  return true;
}
