#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> sortArrayByParity(vector<int>& nums) {
    vector<int> even; 
    vector<int> odd; 
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] % 2 == 0) {
        even.push_back(nums[i]);
      }
      else {
        odd.push_back(nums[i]);
      }
    }
    even.insert(even.end(), odd.begin(), odd.end());
    return even;
  }
};

int main() {
  vector<int> nums  {3,1,2,4};
  vector<int> sorted;
  Solution s;
  sorted = s.sortArrayByParity(nums);
  for (int i = 0; i < sorted.size(); i++) {
    cout << sorted[i] << " ";
  }
  cout << endl;
  return 0;
}
