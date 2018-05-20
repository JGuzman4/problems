/*
 *
 * The Fibonacci sequence is defined by the recurrence relation:
 *
 * Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.
 * 
 * Hence the first 12 terms will be:
 *
 * F1 = 1
 * F2 = 1
 * F3 = 2
 * F4 = 3
 * F5 = 5
 * F6 = 8
 * F7 = 13
 * F8 = 21
 * F9 = 34
 * F10 = 55
 * F11 = 89
 * F12 = 144
 *
 * The 12th term, F12, is the first term to contain three digits.
 *
 * What is the index of the first term in the Fibonacci sequence to contain 1000 digits?
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
#include<math.h>
#include<stdlib.h>
using namespace std;
using namespace boost::multiprecision;

template <class T>
int numDigits(T number)
{
  int digits = 0;
  if (number < 0) digits = 1; // remove this line if '-' counts as a digit
  while (number) {
    number /= 10;
    digits++;
  }
  return digits;
}


int main(int argc, char* argv[]){

  int index = 0;

  mpz_int last_one = 1;
  index++;
  index++;
  mpz_int last_two = 2;
  index++;
  mpz_int i = last_one + last_two;

  mpz_t z;
  mpz_init(z);


  while (numDigits(last_two) < 1000){
    index++;
    last_one = last_two;
    last_two = i;
    i = last_one + last_two;

    //mpz_set(z, last_two.backend().data());
    //gmp_printf("%Zd\n", z);
    //cout << z << endl;
    //if (i)
  }
  cout << index << endl;

  return 0;
} 
