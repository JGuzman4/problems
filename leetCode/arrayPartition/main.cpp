#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int arrayPairSum(vector<int>& nums) {
    int sum = 0;
    vector<int> tmp = nums;
    sort(tmp.begin(), tmp.end());

    for (int i = 0, j = 1; i <= tmp.size() - 2, j <= tmp.size() - 1; i += 2, j += 2) {
      sum += min(tmp[i], tmp[j]);
    }
    return sum;
  }
};

int main() {
  vector<int> nums {1,4,3,2};
  Solution s;
  cout << s.arrayPairSum(nums) << endl;
  return 0;
}
