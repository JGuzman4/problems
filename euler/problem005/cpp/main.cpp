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
