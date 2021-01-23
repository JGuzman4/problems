/*
 *
 * We shall say that an n-digit number is pandigital if it makes use of all the 
 * digits 1 to n exactly once. For example, 2143 is a 4-digit pandigital and is also prime.
 *
 * What is the largest n-digit pandigital prime that exists?
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


long int findLargestPandigital();
bool isPrime(long int n);
bool isPandigital(long int n);
bool checkDigits(vector<int> digits, string s);

int main(int argc, char* argv[]){

  cout << findLargestPandigital() << endl;

  return 0;
}

long int findLargestPandigital(){
  long int largest = 0;

  for (long int i = 7000000; i < 8000000; i++){
    if (isPandigital(i)){
      if (isPrime(i)){
        largest = i;
      }
    }
  }
  return largest;
}

bool isPandigital(long int n){
  string s = to_string(n);
  vector<int> digits(10);
  
  for (unsigned long int i = 0; i < s.length(); i++){
    digits[s[i] - '0']++;
  }
  return checkDigits(digits, s);
}

bool isPrime(long int n){
  for (int i = 2; i < n; i++){
    if (n%i == 0)
      return false;
  }
  return true;
}

bool checkDigits(vector<int> digits, string s){

  if (digits[0] >= 1)
    return false;

  for (unsigned int i = 1; i < s.length(); i++){
    if (digits[i] != 1)
      return false;
  }
  return true;
}

