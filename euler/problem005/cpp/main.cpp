/* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include<iostream>
using namespace std;

int gcd(int a, int b){
  return b == 0 ? a : gcd(b, a % b);
}

int main(){

  int ans = 1;
  for (int i = 1; i < 20; i++){
    ans = (ans * i) / gcd(ans, i);
  }
  std::cout << ans << '\n';
  return 0;
}
