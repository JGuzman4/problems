/*
 * 
 * n! means n × (n − 1) × ... × 3 × 2 × 1
 *
 * For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
 * and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
 *
 * Find the sum of the digits in the number 100!
 *
*/
#include<iostream>
#include<utility>
#include<string> 
#include<sstream> 
#include<fstream> 
#include<vector> 
#include<cmath>
#include<math.h>
#include<stdlib.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

vector<int> factorial(int n);
int sumDigits(vector<int> v);

int main(){
  
  vector<int> v = factorial(100);
  cout << sumDigits(v) << endl;
  

  return 0;
}

vector<int> factorial( int n  ){
  if (n == 1) 
    return vector<int>{1};
  vector<int> result, last = factorial(n - 1);
  int size = last.size(), i = 0, carry = 0;
  while (i < size || carry > 0){
    if (i < size) 
      carry += n * last[i];
    result.push_back(carry % 10);
    carry /= 10;
    i++;
  }
  return result;
}

int sumDigits(vector<int> v){
  int sum = 0;
  for (unsigned int i = 0; i < v.size(); i++)
    sum += v[i];
  return sum;
}
