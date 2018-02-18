/*
 *
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 *
 *
 *
*/
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<stdlib.h>
using namespace std;

int gcd(int a, int b);
int findA(int d, int m, int n);
int findB(int d, int m, int n);
int findC(int d, int m, int n);

int main(int argc, char const *argv[]) {

  bool found;
  int s = 1000;
  int a = 0, b = 0, c = 0, m = 0, n = 0, k = 0, d = 0;

  int limit = (int)sqrt(s / 2);

  for (m = 2; m <= limit; m++){
    if ((s/2)%m == 0){
      if (m%2 == 0){
        k = m+1;
      } else {
        k = m+2;
      }
      while (k < 2 * m && k <= s / (2*m)){
        if (s / (2*m) % k == 0 && gcd(k, m) == 1){
          d = s / 2 / (k*m);
          n = k - m;
          a = findA(d, m, n);
          b = findB(d, m, n);
          c = findC(d, m, n);
          found = true;
          break;
        }
        k += 2;
      }
    }
    if (found){
      cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
      cout << a*b*c << endl;
      break;
    }
  }

  return 0;
}

int gcd(int a, int b){
  int x = 0, y = 0;

  if (a > b){
    x = a;
    y = b;
  } else {
    x = b;
    y = a;
  }

  while (x % y != 0){
    int temp = x;
    x = y;
    y = temp % x;
  }
  return y;
}

int findA(int d, int m, int n){
  return d*((m*m)-(n*n));
}
int findB(int d, int m, int n){
  return 2*d*m*n;
}
int findC(int d, int m, int n){
  return d*((m*m)+(n*n));
}
