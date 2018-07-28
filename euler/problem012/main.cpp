/*
 *
 * What is the value of the first triangle number to have over five hundred divisors?
 *
 *
 *
*/
#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
using namespace std;

int findDivisors(long unsigned int n);

int main(){

  long unsigned int previous = 0;
  long unsigned int current = 0;
  long unsigned int count = 1;

  while (findDivisors(current) < 500){
    current = previous+count;
    previous = current;
    count++;
  }
  cout << current << endl;

  return 0;
}

int findDivisors(long unsigned int n){
  int limit = n;
  int num = 0;
  if (n == 1)
    return 1;

  for (int i = 1; i < limit; i++) {
    if (n % i == 0){
      limit = n / i;
      if (limit != i)
        num++;
      num++;
    }
  }
  return num;
}
