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

void print(vector<vector<int> > v);
void resize(vector<vector<int> > &v, int total, vector<int> pences);
int countWays(vector<vector<int> > &v, vector<int> pences);

int main(int argc, char* argv[]){

  vector<vector<int> > ways;

  vector<int> pences;
  pences.push_back(1);
  pences.push_back(2);
  pences.push_back(5);
  pences.push_back(10);
  pences.push_back(20);
  pences.push_back(50);
  pences.push_back(100);
  pences.push_back(200);

  int total = 200;

  resize(ways, total, pences);

  cout << countWays(ways, pences) << endl;


  return 0;
} 

void print(vector<vector<int> > v){
  for (unsigned int i = 0; i < v.size(); i++){
    for (unsigned int j = 0; j < v[i].size(); j++){
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

}

void resize(vector<vector<int> > &v, int total, vector<int> pences){

  v.resize(pences.size());
  for (unsigned int i = 0; i < v.size(); i++){
    v[i].resize(total+1);
  }
  
}

int countWays(vector<vector<int> > &v, vector<int> pences){
  for (unsigned int i = 0; i < v[0].size(); i++){
    v[0][i] = 1;
  }

  for (unsigned int i = 1; i < v.size(); i++){
    for (unsigned int j = 0; j < v[i].size(); j++){
      if (j >= pences[i]){
        v[i][j] = v[i-1][j] + v[i][j-pences[i]];
      }
      else {
        v[i][j] = v[i-1][j];
      }
    }
  }

  return v[v.size()-1][v[0].size()-1];
}
