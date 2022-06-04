#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> vals;

    for (int i = 0; i < nums.size(); i++) {
      if (vals.find(nums[i]) == vals.end()) {
        vals.insert(nums[i]);
      }
      else {
        return true;
      }
    }
    return false;
  }
};

int main() {
    return 0;
}
