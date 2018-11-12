/*
 *
 * An irrational decimal fraction is created by concatenating the positive integers:
 *
 * 0.123456789101112131415161718192021...
 *
 * It can be seen that the 12th digit of the fractional part is 1.
 *
 * If dn represents the nth digit of the fractional part, 
 * find the value of the following expression.
 *
 * d1 × d10 × d100 × d1000 × d10000 × d100000 × d1000000
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

long int findValue();

int main(int argc, char* argv[]){

  cout << findValue() << endl;

  return 0;
}

long int findValue(){

  long int sum = 1;
  string s = "";
  long int d = 0;
  long int count = 0;
  for (long int i = 1; i < 1000000; i++){
    s = to_string(i);
    for (long int j = 0; j < s.length(); j++){
      count++;
      if (count == 1){
        sum *= s[j] - '0';
        cout << s[j] << endl;
      }
      else if (count == 10){
        sum *= s[j] - '0';
        cout << s[j] << endl;
      }
      else if (count == 100){
        sum *= s[j] - '0';
        cout << s[j] << endl;
      }
      else if (count == 1000){
        sum *= s[j] - '0';
        cout << s[j] << endl;
      }
      else if (count == 10000){
        sum *= s[j] - '0';
        cout << s[j] << endl;
      }
      else if (count == 100000){
        sum *= s[j] - '0';
        cout << s[j] << endl;
      }
      else if (count == 1000000){
        sum *= s[j] - '0';
        cout << s[j] << endl;
        return sum;
      }
    }
  }

  return sum;
}
