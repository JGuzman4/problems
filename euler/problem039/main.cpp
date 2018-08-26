/*
 *
 * If p is the perimeter of a right angle triangle with integral length sides, {a,b,c}, 
 * there are exactly three solutions for p = 120.
 *
 * {20,48,52}, {24,45,51}, {30,40,50}
 *
 * For which value of p ≤ 1000, is the number of solutions maximised?
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

int findP(int limit);
int solutionCount(int p);

int main(int argc, char* argv[]){

  cout << findP(1000) << endl;

  return 0;
} 

int findP(int limit){

  int max = 0, p = 0;
  for (int i = 10; i <= 1000; i += 2){
    if (solutionCount(i) > max){
      max = solutionCount(i);
      p = i;
    }
  }

  return p;
}

int solutionCount(int p){
  
  int count = 0;
  for (int a = 2; a < (p/3); a++){
    if (p*(p-2*a)%(2*(p-a)) == 0)
      count++;
  }

  return count;
}
