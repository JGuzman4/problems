/*
 *
 * The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.
 *
 * Find the sum of all numbers, less than one million, which are palindromic 
 * in base 10 and base 2.
 *
 * (Please note that the palindromic number, in either base, may not include leading zeros.)
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
#include <bitset>
#include<math.h>
#include<stdlib.h>
using namespace std;
using namespace boost::multiprecision;

long int sumNumbers(long int limit);
void eraseLeadingZeros(string &s);

int main(int argc, char* argv[]){

  int limit = 1000000;

  cout << sumNumbers(limit) << endl;

  return 0;
} 

long int sumNumbers(long int limit){

  long int sum = 0;

  for (long int i = 0; i < limit; i++){
    string decimal = to_string(i);
    string binary = bitset<32>(i).to_string();
    eraseLeadingZeros(binary);

    if (decimal == string(decimal.rbegin(), decimal.rend()) && binary == string(binary.rbegin(), binary.rend()))
      sum += i;
  }

  return sum;
}

void eraseLeadingZeros(string &s){
  while (s[0] == '0')
    s = s.substr(1, s.length()-1);
}
