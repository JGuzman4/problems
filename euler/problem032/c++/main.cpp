/*
 *
 * We shall say that an n-digit number is pandigital if it 
 * makes use of all the digits 1 to n exactly once; for example, 
 * the 5-digit number, 15234, is 1 through 5 pandigital.
 *
 * The product 7254 is unusual, as the identity, 39 × 186 = 7254, 
 * containing multiplicand, multiplier, and product is 1 through 9 pandigital.
 *
 * Find the sum of all products whose multiplicand/multiplier/product 
 * identity can be written as a 1 through 9 pandigital.
 *
 * HINT: Some products can be obtained in more than one way so 
 * be sure to only include it once in your sum.
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

void print(set<int> v);
int sumProducts();
bool checkDigits(vector<int> digits);

int main(int argc, char* argv[]){

  cout << sumProducts() << endl;

  return 0;
} 

void print(set<int> v){
  set<int>::iterator it;
  for (it = v.begin(); it != v.end(); it++)
    cout << *it << endl;
}

int sumProducts(){

  vector<int> digits(10);
  set<int> products;
  int product = 0;
  int sum = 0;
  string s = "";

  for (int a = 1; a <= 500; a++){
    for (int b = 1; b <= 2000; b++){
      product = a*b;
      s += to_string(a);
      s += to_string(b);
      s += to_string(product);

      for (unsigned int i = 0; i < s.length(); i++)
        digits[s[i] - '0']++;

      if (checkDigits(digits) == true && s.length() == 9)
        products.insert(product);

      for (unsigned int i = 0; i < digits.size(); i++)
        digits[i] = 0;
      s = "";
    }
  }

  set<int>::iterator it;
  for (it = products.begin(); it != products.end(); it++)
    sum  += *it;
  print(products);


  return sum;
}

bool checkDigits(vector<int> digits){

  //if (digits[0] > 0)
  //  return false;
  for (unsigned int i = 1; i < digits.size(); i++){
    if (digits[i] != 1)
      return false;
  }
  return true;
}

