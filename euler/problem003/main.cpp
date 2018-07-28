/*
 * 
 * 
 *
 *
 *
 *
*/
#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
using namespace std;


bool isPrime(long int n);

int main(){


  long double largest = 0;
  for (long int i = 1; i < 600851475143; i++){
    if (600851475143%i == 0 && isPrime(i))
      largest = i;
  }
  cout << largest << endl;
	return 0;
}

bool isPrime(long int n){
  for (int i = 2; i < n; i++){
    if (n%i == 0)
      return false;
  }
  return true;
}
