/*
 * The nth term of the sequence of triangle numbers is given by, 
 * tn = ½n(n+1); 
 * so the first ten triangle numbers are:
 *
 * 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
 *
 * By converting each letter in a word to a number corresponding 
 * to its alphabetical position and adding these values we form a word value. 
 * For example, the word value for SKY is 19 + 11 + 25 = 55 = t10. 
 * If the word value is a triangle number then we shall call the word a triangle word.
 *
 * Using words.txt (right click and 'Save Link/Target As...'), 
 * a 16K text file containing nearly two-thousand common English words, how 
 * many are triangle words?
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

bool isTriangleWord(string word);
int addLetters(string word);

int main(int argc, char* argv[]){

  string word = "";
  int count = 0;
  while (cin >> word){
    if (isTriangleWord(word))
      count++;
  }

  cout << count << endl;

  return 0;
}

bool isTriangleWord(string word){

  int value = addLetters(word);

  long int n = 8 * value + 1;
  long int m = sqrt(n);

  if (m*m == n)
    return true;

  return false;

}

int addLetters(string word){

  int sum = 0;
  for (unsigned int i = 0; i < word.length(); i++)
    sum += word[i] - 'A' + 1;

  return sum;
}
