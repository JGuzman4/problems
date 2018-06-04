/*
 *
 * A unit fraction contains 1 in the numerator. The decimal representation of the unit fractions with denominators 2 to 10 are given:
 *
 * 1/2    =     0.5
 * 1/3    =     0.(3)
 * 1/4    =     0.25
 * 1/5    =     0.2
 * 1/6    =     0.1(6)
 * 1/7    =     0.(142857)
 * 1/8    =     0.125
 * 1/9    =     0.(1)
 * 1/10    =     0.1
 *
 * Where 0.1(6) means 0.166666..., and has a 1-digit recurring cycle. It can be seen that 1/7 has a 6-digit recurring cycle.
 *
 * Find the value of d < 1000 for which 1/d contains the longest recurring cycle in its decimal fraction part.
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

int findCycleLength(int demoninator);

int main(int argc, char* argv[]){

  vector<int> v;
  v.push_back(0);

  int longest = 0, position = 0;

  for (int i = 0; i < 1000; i++){
    if (findCycleLength(i) > longest){
      longest = findCycleLength(i);
      position = i;
    }
  }
  cout << position << endl;

  return 0;
} 

int findCycleLength(int demoninator){

  vector<int> digits(demoninator);

  if (demoninator == 0)
    return 0;

  int notSeen = 0, p= 1, d= 1, r = 0;

  while (true){
    r = d % demoninator;

    if (r == 0)
      return 0;
    if (digits[r] != notSeen)
      return  p - digits[r];

    digits[r] = p;
    p++;

    d = r * 10;
  }

}
