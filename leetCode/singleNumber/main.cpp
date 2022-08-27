#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int singleNumber(vector<int>& nums) {
    if (nums.size() == 1) {
      return nums[0];
    }
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
      sum ^= nums[i];
    }
    return sum;
  }
};

int main() {
  vector<int> nums {4,1,2,1,2}:
  Solution s;
  spiral = s.singleNumber(nums);
  cout << endl;
  return 0;
}
