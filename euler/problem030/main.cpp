/*
 *
 * Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:
 *
 * 1634 = 14 + 64 + 34 + 44
 * 8208 = 84 + 24 + 04 + 84
 * 9474 = 94 + 44 + 74 + 44
 * As 1 = 14 is not a sum it is not included.
 *
 * The sum of these numbers is 1634 + 8208 + 9474 = 19316.
 *
 * Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.
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

void print(vector<long int> v);

int main(int argc, char* argv[]){

  vector<long int> v;
  for (long int i = 2; i < 1000000; i++){
    string s = to_string(i);
    long int total = 0;
    for (int j = 0; j < s.length(); j++){
      int c = s[j] - '0';
      total += pow(c, 5);
    }
    if (i == total)
      v.push_back(i);
  }


  long int total = 0;
  for (int i = 0; i < v.size(); i++)
    total += v[i];

  cout << total << endl;

  return 0;
} 

void print(vector<long int> v){
  for (unsigned int i = 0; i < v.size(); i++)
    cout << v[i] << endl;
}
