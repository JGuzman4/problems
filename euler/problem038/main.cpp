/*
 *
 * Take the number 192 and multiply it by each of 1, 2, and 3:
 *
 * 192 × 1 = 192
 * 192 × 2 = 384
 * 192 × 3 = 576
 * By concatenating each product we get the 1 to 9 pandigital, 192384576. 
 * We will call 192384576 the concatenated product of 192 and (1,2,3)
 *
 * The same can be achieved by starting with 9 and multiplying by 1, 2, 3, 4, and 5, 
 * giving the pandigital, 918273645, which is the concatenated product of 9 and (1,2,3,4,5).
 *
 * What is the largest 1 to 9 pandigital 9-digit number that can be formed as the 
 * concatenated product of an integer with (1,2, ... , n) where n > 1?
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

long double findPandigital();
void removeZeros(string &s);
bool checkDigits(vector<int> digits);

int main(int argc, char* argv[]){

  cout << setprecision(10) << findPandigital() << endl;

  return 0;
} 

long double findPandigital(){

  vector<int> digits(10);
  long double counter = 1;
  long double product = 0;
  long double largest = 0;
  long double c = 1;
  string concat = "";
  string s = "";

  for (long double i = 2; i < 10000; i++){
    c = 1;
    while (c < 999999999){
      counter++;
      product = i * counter;
      s = to_string(product);
      removeZeros(s);
      concat += s;

      for (unsigned int i = 0; i < concat.length(); i++)
        digits[concat[i] - '0']++;

      if (checkDigits(digits) == true && concat.length() == 9 && std::stod(concat) > largest)
        largest = std::stod(concat);

      for (unsigned int i = 0; i < digits.size(); i++)
        digits[i] = 0;

      c = std::stod(concat);
    }
    counter = 0;
    concat = "";
  }
  return largest;
}

void removeZeros(string &s){

  for (unsigned int i = 0; i < s.length(); i++){
    if (s[i] == '.'){
      s = s.substr(0, i);
      break;
    }
  }
}

bool checkDigits(vector<int> digits){

  for (unsigned int i = 1; i < digits.size(); i++){
    if (digits[i] != 1)
      return false;
  }
  return true;
}
