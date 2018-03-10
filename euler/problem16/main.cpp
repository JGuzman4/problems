/*
 * 
 * 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
 *
 * What is the sum of the digits of the number 2^1000?
 *
 *
*/
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<stdlib.h>
using namespace std;



int main(){

  string s = to_string(pow(2.0, 1000));

  long double total = 0;
  for (long double i = 0; i < s.length(); i++){
    total += s[i] - '0';
  }
  cout << total << endl;

  return 0;
}

