#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int numJewelsInStones(string jewels, string stones) {
    int count = 0;

    map<char, int> jwls;
    map<char, int>::iterator it;

    for (int i = 0; i < jewels.length(); i++) {
      jwls[jewels[i]] = 0;
    }
    for (int i = 0; i < stones.length(); i++) {
      it = jwls.find(stones[i]);
      if (it != jwls.end()) {
        count++;
      }
    }
    return count;
  }
};

int main() {
  return 0;
}
