/*
 *
 * The fraction 49/98 is a curious fraction, as an inexperienced 
 * mathematician in attempting to simplify it may incorrectly believe 
 * that 49/98 = 4/8, which is correct, is obtained by cancelling the 9s.
 *
 * We shall consider fractions like, 30/50 = 3/5, to be trivial examples.
 *
 * There are exactly four non-trivial examples of this type of fraction, 
 * less than one in value, and containing two digits in the numerator and denominator.
 *
 * If the product of these four fractions is given in its lowest 
 * common terms, find the value of the denominator.
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

void print(set<int> v);
int gcd(int a, int b);
double findProduct();
bool nonTrivial(double a, double b);

int main(int argc, char* argv[]){

  cout << findProduct() << endl;

  return 0;
} 

void print(set<int> v){
  set<int>::iterator it;
  for (it = v.begin(); it != v.end(); it++)
    cout << *it << endl;
}

int gcd(int a, int b){
  if (b ==0)
    return a;
  else
    return gcd(b, a%b);
}

double findProduct(){
  set<double> numerators;
  set<double> denominators;
  double top = 1;
  double bottom = 1;
  for (double a = 10; a < 100; a++){
    for (double b = a+1; b < 100; b++){

      if (nonTrivial(a, b) == true){
        numerators.insert(a);
        denominators.insert(b);
      }
    }
  }

  for (set<double>::iterator it = numerators.begin(); it != numerators.end(); it++)
    top *= *it;
  for (set<double>::iterator it = denominators.begin(); it != denominators.end(); it++)
    bottom *= *it;
  int divisor = gcd((int)top, (int)bottom);
  return bottom/divisor;
}

bool nonTrivial(double a, double b){

  if ((int)a%10 == 0 && (int)b%10 == 0)
    return false;

  double result = a/b;
  string str_a = to_string(a);
  string str_b = to_string(b);

  double A1 = str_a[0] - '0';
  double A2 = str_a[1] - '0';

  double B1 = str_b[0] - '0';
  double B2 = str_b[1] - '0';

  if ((A1/B1) == result && A2 == B2)
    return true;
  if ((A1/B2) == result && A2 == B1)
    return true;
  if ((A2/B1) == result && A1 == B2)
    return true;
  if ((A2/B2) == result && A1 == B1)
    return true;

  return false;
}
