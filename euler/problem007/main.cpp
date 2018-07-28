/*
 *
 * What is the 10,001st prime number?
 *
 *
 *
*/
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n);

int main(){

  int n = 0, i = 2;
  int num = 0;
  cout << "what is the nth prime number you are looking for?" << endl;
  cin >> n;


  while (true){
    if (isPrime(i))
      num++;
    if (num == n){
      cout << i << endl;
      break;
    }
    i++;
  }

  return 0;
}

bool isPrime(int n){
  for (int i = 2; i < n; i++){
    if (n%i == 0)
      return false;
  }
  return true;
}
