/*
 * 
 * By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.
 *
 *    3
 *   7 4
 *  2 4 6
 * 8 5 9 3
 *
 * That is, 3 + 7 + 4 + 9 = 23.
 *
 * Find the maximum total from top to bottom of the triangle below:
 *
 *
 *               75
 *              95 64
 *             17 47 82
 *            18 35 87 10
 *           20 04 82 47 65
 *          19 01 23 75 03 34
 *         88 02 77 73 07 63 67
 *        99 65 04 28 06 16 70 92
 *       41 41 26 56 83 40 80 70 33
 *      41 48 72 33 47 32 37 16 94 29
 *     53 71 44 65 25 43 91 52 97 51 14
 *    70 11 33 28 77 73 17 78 39 68 17 57
 *   91 71 52 38 17 14 91 43 58 50 27 29 48
 *  63 66 04 68 89 53 67 30 73 16 69 87 40 31
 * 04 62 98 27 23 09 70 98 73 93 38 53 60 04 23
 *
 *
*/
#include<iostream>
#include<string> 
#include<vector> 
#include<cmath>
#include<math.h>
#include<stdlib.h>
using namespace std;

void readPyramid(vector<vector<int> > &pyramid); 
void printVector(vector<vector<int> > v);
void findPath(vector<vector<int> > &max, vector<vector<int> > pyramid);

int main(){
  
  vector<vector<int> > pyramid;
  vector<vector<int> > max;

  readPyramid(pyramid);
  findPath(max, pyramid);
  printVector(max);

  return 0;
}

void readPyramid(vector<vector<int> > &pyramid){
  int number = 0;
  int k = 1;
  pyramid.resize(15);

  for (unsigned int i = 0; i < 15; i++){
    pyramid[i].resize(k);
    for (unsigned int j = 0; j < k; j++){
      cin >> number;
      pyramid[i][j] = number;
    }
    k++;
  }
}
void printVector(vector<vector<int> > v){
  for (unsigned int i = 0; i < v.size(); i++){
    for (unsigned int j = 0; j < v[i].size(); j++)
      cout << v[i][j] << " ";
    cout << endl;
  }

}

void findPath(vector<vector<int> > &max, vector<vector<int> > pyramid){

  max.resize(15);
  for (unsigned int i = 0; i < 15; i++)
    max[i].resize(pyramid[i].size());

  max[max.size()-1] = pyramid[pyramid.size()-1];

  for (unsigned int i = pyramid.size()-2; i < pyramid.size(); i--){
    for (unsigned int j = 0; j < pyramid[i].size(); j++){
      if (j == pyramid[i].size()-1){
        if ((pyramid[i][j] + max[i+1][max[i+1].size()-2]) > (pyramid[i][j] + max[i+1][max[i+1].size()-1]))
          max[i][j] = pyramid[i][j] + max[i+1][max[i+1].size()-2];
        else 
          max[i][j] = pyramid[i][j] + max[i+1][max[i+1].size()-1];
      }
      else {
        if ((pyramid[i][j] + max[i+1][j]) > (pyramid[i][j] + max[i+1][j+1]))
          max[i][j] = pyramid[i][j] + max[i+1][j];
        else 
          max[i][j] = pyramid[i][j] + max[i+1][j+1];
      }
    }
  }
}

