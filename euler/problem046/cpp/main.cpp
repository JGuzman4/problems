/*
 * It was proposed by Christian Goldbach that every odd composite number can be written as the sum of a prime and twice a square.
 *
 * 9 = 7 + 2×12
 * 15 = 7 + 2×22
 * 21 = 3 + 2×32
 * 25 = 7 + 2×32
 * 27 = 19 + 2×22
 * 33 = 31 + 2×12
 *
 * It turns out that the conjecture was false.
 *
 * What is the smallest odd composite that cannot be written as the sum of a prime and twice a square?
 *
 *
*/
#include<utility>
#include<string> 
#include<vector> 
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

bool isPrime(long long n);
bool isComposite(long long n, vector<long long> primes);

int main(int argc, char* argv[]){

  long long num = 3;

  vector<long long> primes;
  vector<long long> composites;

  while(num < 10000) {
    if (isPrime(num)){
      primes.push_back(num);
    }
    else {
      composites.push_back(num);
    }
    num += 2;
  }

  for (int n = 0; n < composites.size(); n++){
    if (isComposite(composites[n], primes))
      cout << composites[n] << endl;
  }
  return 0;
}

bool isPrime(long long n){
  for (int i = 2; i < n; i++){
    if (n%i == 0)
      return false;
  }
  return true;
}

bool isComposite(long long n, vector<long long> primes){
  for (int j = 0; j < primes.size() || j >= n; j++){
    for (int y = 1; (2*y*y + primes[j]) <= n; y++){
      if (n == primes[j] + 2*y*y)
        return false;
    }
  }
    return true;
}
