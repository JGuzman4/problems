/*
 * 
 * Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide
 * evenly into n).
 *
 * if d(a) = b, and d(b) = a, where a does not equal b, then a and b are an amicable pair
 * and each of a and b are called amicable numbers.
 *
 * For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110;
 * therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
 *
 * Evaluate the sum of all the amicable numbers under 10000.
 *
 *
*/
#include<iostream>
#include<utility>
#include<string> 
#include<vector> 
#include<set> 
#include<cmath>
#include<math.h>
#include<stdlib.h>
using namespace std;

vector<int> properDivisors(int n);
int d(int n);

int main(){
  
  vector<int> numbers;
  int sum = 0;
  int a = 0, b = 0;
  for (int a = 1; a < 10000; a++){
    b = d(a);
    if (a < b && d(b) == a){
      numbers.push_back(a);
      numbers.push_back(b);
    }
  }
  for (unsigned int j = 0; j < numbers.size(); j++){
    sum += numbers[j];
  }
  
  cout << sum << endl;

  return 0;
}

int d(int n){
  int total = 0;
  vector<int> divisors = properDivisors(n);
  for (unsigned int i = 0; i < divisors.size(); i++)
    total += divisors[i];
  return total;
}

vector<int> properDivisors(int n){
  vector<int> divisors;

  for (unsigned int i = 1; i < n; i++){
    if (n % i == 0)
      divisors.push_back(i);
  }

  return divisors;
}
