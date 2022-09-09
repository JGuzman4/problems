#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:

  vector<int> pings;
  RecentCounter() {
    pings.clear();
  }
  
  int ping(int t) {
    pings.push_back(t);
    int counter = 0;
    int i = pings.size() - 1;
    while (i >= 0 && pings[i] >= (t - 3000)) {
      counter++;
      i--;
    }
    return counter;
  }
};

int main() {
  return 0;
}
