#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int firstBadVersion(int n) {

    int left = 0;
    int right = n;
    while (left <= right) {
      int mid = left + (right - left) / 2;

      bool ibvMid = isBadVersion(mid);

      if (ibvMid == true && isBadVersion(mid - 1) == false) {
        return mid;
      }
      else if (ibvMid == true) {
        right = mid - 1;
      }
      else {
        left = mid + 1;
      }
    }
    return 0;
  }
};

int main() {
  return 0;
}
