/*
 *
 * The number 3797 has an interesting property. Being prime itself, 
 * it is possible to continuously remove digits from left to right, 
 * and remain prime at each stage: 3797, 797, 97, and 7. Similarly 
 * we can work from right to left: 3797, 379, 37, and 3.
 *
 * Find the sum of the only eleven primes that are both truncatable 
 * from left to right and right to left.
 *
 * NOTE: 2, 3, 5, and 7 are not considered to be truncatable primes.
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

long int sumPrimes();
vector<int> isPrime(long int limit);
int rightToLeft(long int n, vector<int> primes);
int leftToRight(long int n, vector<int> primes);

int main(int argc, char* argv[]){


  cout << sumPrimes() << endl;

  return 0;
} 

long int sumPrimes(){

  long int sum = 0;
  long int limit = 1500000;

  vector<int> primes = isPrime(limit);
  for (long int i = 10; i < limit; i++){
    if (rightToLeft(i, primes) == 0 && leftToRight(i, primes) == 0){
      sum += i;
    }
  }

  return sum;
}

vector<int> isPrime(long int limit){
  vector<int> primes(limit);
  int p = 0;
  primes[0] = 1;
  primes[1] = 1;
  for (unsigned long int i = 2; i < limit; i++){
    for (unsigned long int j = 2; j < i; j++){
      if (i%j == 0){
        p = 1;
        break;
      }
    }
    if (p == 1)
      primes[i] = 1;
    else
      primes[i] = 0;
    p = 0;
  }
  return primes;
}

int leftToRight(long int n, vector<int> primes){
  string s = to_string(n);
  while (s != ""){
    if (primes[std::stoi(s)] != 0)
      return 1;
    if (s.length() == 1)
      s = "";
    else
      s = s.substr(1, s.length());
  }
  return 0;
}

int rightToLeft(long int n, vector<int> primes){
  string s = to_string(n);
  while (s != ""){
    if (primes[std::stoi(s)] != 0)
      return 1;
    if (s.length() == 1)
      s = "";
    else
      s = s.substr(0, s.length()-1);
  }
  return 0;
}
