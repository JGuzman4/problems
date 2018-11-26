/*
 * The number, 1406357289, is a 0 to 9 pandigital number because it is 
 * made up of each of the digits 0 to 9 in some order, but it also has 
 * a rather interesting sub-string divisibility property.
 *
 * Let d1 be the 1st digit, d2 be the 2nd digit, and so on. In this way, 
 * we note the following:
 *
 * d2d3d4=406 is divisible by 2
 * d3d4d5=063 is divisible by 3
 * d4d5d6=635 is divisible by 5
 * d5d6d7=357 is divisible by 7
 * d6d7d8=572 is divisible by 11
 * d7d8d9=728 is divisible by 13
 * d8d9d10=289 is divisible by 17
 *
 * Find the sum of all 0 to 9 pandigital numbers with this property.
 *
*/
#include<fstream>
#include<utility>
#include<string> 
#include<vector> 
#include<set> 
#include<cmath>
#include<iostream>
#include<algorithm>
#include<math.h>
#include <iomanip>
#include<stdlib.h>
using namespace std;

long double sumPandigitals();
bool isPandigital(long int n);
bool checkDigits(vector<int> digits, string s);
bool hasPrimeProperty(long int n);

int main(int argc, char* argv[]){

  cout << setprecision(20) << sumPandigitals() << endl;

  return 0;
}

long double sumPandigitals(){
  long double sum = 0;

  for (long int i = 123456789; i < 9999999999; i++){
    if (isPandigital(i)){
      if (hasPrimeProperty(i)){
        sum += i;
      }
    }
  }
  return sum;

}
bool isPandigital(long int n){
  string s = to_string(n);
  vector<int> digits(10);
  
  for (unsigned long int i = 0; i < s.length(); i++){
    digits[s[i] - '0']++;
  }
  return checkDigits(digits, s);
}

bool checkDigits(vector<int> digits, string s){


  for (unsigned int i = 0; i < s.length(); i++){
    if (digits[i] != 1)
      return false;
  }
  return true;
}

bool hasPrimeProperty(long int n){
  string s = to_string(n);
  vector<int> d(10);

  int sum = 0;

  sum = std::stoi(s.substr(1, 3));
  if (sum % 2 == 0) {} else {  return false; }

  sum = std::stoi(s.substr(2, 3));
  if (sum % 3 == 0) {} else {  return false; }

  sum = std::stoi(s.substr(3, 3));
  if (sum % 5 == 0) {} else {  return false; }

  sum = std::stoi(s.substr(4, 3));
  if (sum % 7 == 0) {} else {  return false; }

  sum = std::stoi(s.substr(5, 3));
  if (sum % 11 == 0) {} else {  return false; }

  sum = std::stoi(s.substr(6, 3));
  if (sum % 13 == 0) {} else {  return false; }

  sum = std::stoi(s.substr(7, 3));
  if (sum % 17 == 0) {} else {  return false; }

  return true;
  
}
