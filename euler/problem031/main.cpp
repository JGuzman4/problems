/*
 *
 * In England the currency is made up of pound, £, and pence, p, and there are eight coins in general circulation:
 *
 * 1p, 2p, 5p, 10p, 20p, 50p, £1 (100p) and £2 (200p).
 * It is possible to make £2 in the following way:
 *
 * 1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p
 * How many different ways can £2 be made using any number of coins?
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


int main(int argc, char* argv[]){

  vector<int> pences;

  pences.push_back(1);
  pences.push_back(2);
  pences.push_back(5);
  pences.push_back(10);
  pences.push_back(20);
  pences.push_back(50);
  pences.push_back(100);


  for (unsigned int i = 0; i < pences.size(); i++){
    for (unsigned int j = 0; j < pences.size(); j++){

    }
  }


  return 0;
} 
