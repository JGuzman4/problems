#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
  int threeSumClosest(vector<int>& nums, int target) {
    int result = nums[0] + nums[i] + nums[nums.size() - 1];
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++) {
      int a = i + 1;
      int b = nums.size() - 1;

      while (a < b) {
        int currSum = nunms[i] + nums[a] + nums[b];
        if (currSum > target) {
          b -= 1;
        }
        else {
          a += 1;
        }
        if (abs(currSum - target) < abs(result - target)) {
          result = currSum;
        }
      }
    }
    return result;
  }
};

int main() {
  return 0;
}
