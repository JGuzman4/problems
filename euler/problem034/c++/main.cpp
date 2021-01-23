/*
 *
 * 145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
 *
 * Find the sum of all numbers which are equal to the sum of the factorial of their digits.
 *
 * Note: as 1! = 1 and 2! = 2 are not sums they are not included.
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

int sumNumbers();
int factorial(int n);

int main(int argc, char* argv[]){

  cout << sumNumbers() << endl;

  return 0;
} 

int sumNumbers(){
  set<double> numbers;
  vector<int> facts = {
    factorial(0),
    factorial(1),
    factorial(2),
    factorial(3),
    factorial(4),
    factorial(5),
    factorial(6),
    factorial(7),
    factorial(8),
    factorial(9)
  };
  int sum = 0;
  string s = "";
  for (int i = 3; i < 1500000; i++){
    sum = 0;
    s = to_string(i);
    for (int j = 0; j < s.length(); j++){
      int d = s[j] - '0';
      sum += facts[d];
    }
    if (sum == i)
      numbers.insert(i);
  }
  sum = 0;
  for (set<double>::iterator it = numbers.begin(); it != numbers.end(); it++)
    sum += *it;
  return sum;
}

int factorial(int n){
  if (n == 0)
    return 1;
  if (n == 1)
    return n;
  else
    return n * factorial(n-1);
}
