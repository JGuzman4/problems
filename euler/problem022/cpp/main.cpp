/*
 * Using names.txt (right click and 'Save Link/Target As...'), 
 * a 46K text file containing over five-thousand first names, 
 * begin by sorting it into alphabetical order. Then working 
 * out the alphabetical value for each name, multiply this 
 * value by its alphabetical position in the list to obtain a name score.
 *
 * For example, when the list is sorted into alphabetical order, 
 * COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 
 * 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.
 *
 * What is the total of all the name scores in the file?
 * 
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

void printNames(vector<string> s);
void mergeSort(vector<string> &A, int p, int r);
void merge(vector<string> &A, int p, int q, int r);
int nameScore(string s, int pos);

int main(int argc, char* argv[]){


  string str = "";
  vector<string> s;

  for (int i = 0; i < 5163; i++){
    cin >> str;
    s.push_back(str);
  }
  mergeSort(s, 0, s.size()-1);

  int total = 0;
  for (unsigned int i = 0; i < s.size(); i++){
    total += nameScore(s[i], i+1);
  }
  cout << total << endl;
  return 0;
} 
void printNames(vector<string> s){
  for (unsigned int i = 0; i < s.size(); i++)
    cout << s[i] << endl;
}

void mergeSort(vector<string> &A, int p, int r){
  if (p < r){
    int q = ((p+r)/2);
    mergeSort(A, p, q);
    mergeSort(A, q+1, r);
    merge(A, p, q, r);
  }
}

void merge(vector<string> &A, int p, int q, int r){
  int n1 = q - p + 1;
  int n2 = r - q;
  int j = 0, k = 0, i = 0;


  vector<string> L(n1+1);
  vector<string> R(n2+1);
  for (i = 0; i < n1; i++)
    L[i] = A[p+i];
  for (j = 0; j < n2; j++)
    R[j] = A[q+j+1];

  L[n1] = "zzzzz";
  R[n2] = "zzzzz";
  j = 0;
  i = 0;

  for (k = p; k <= r; k++){
    if (L[i] <= R[j]){
      A[k] = L[i];
      i++;
    }
    else {
      A[k] = R[j];
      j++;
    }
  }
}

int nameScore(string s, int pos){
  int score = 0;
  int value = 0;
  for (unsigned int i = 0; i < s.length(); i++){
    value = s[i] - 'a' + 1;
    score += value;
  }
  return score*pos;
}
