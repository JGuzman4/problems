/*
 * A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. 
 * For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.
 *
 * A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.
 *
 * As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum 
 * of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can 
 * be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis 
 * even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.
 *
 * Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.
 *
 *
*/
#include<iostream>
#include<fstream>
#include<utility>
#include<string> 
#include<vector> 
#include<set> 
#include<cmath>
#include<math.h>
#include<stdlib.h>
using namespace std;

bool isAbundant(int n);
bool beExpressed(vector<int> abundantNumbers, int n);

int main(int argc, char* argv[]){

  vector<int> abundantNumbers;

  for (int i = 0; i < 28123 ; i++){
    if (isAbundant(i))
      abundantNumbers.push_back(i);
  }

  int sum = 0;
  for (int i = 0; i < 28123 ; i++){
    if (!beExpressed(abundantNumbers, i))
      sum += i;
  }

  cout << sum << endl;
  return 0;
} 

bool isAbundant(int n){
  int sum = 0;
  for (unsigned int i = 1; i < n; i++){
    if (n % i == 0)
      sum += i;
  }
  if (sum > n)
    return true;
  return false;

}

bool beExpressed(vector<int> abundantNumbers, int n){

  for (unsigned int i = 0; i < abundantNumbers.size(); i++){
    for (unsigned int j = i; j < abundantNumbers.size(); j++){
      if (abundantNumbers[i]+abundantNumbers[j] == n)
        return true;
    }
  }

  return false;
}
