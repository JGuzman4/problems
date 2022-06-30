#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> sortedSquares(vector<int>& nums) {

    vector<int> squares;

    for (int i = 0; i < nums.size(); i++) {
      squares.push_back(nums[i] * nums[i]);
    }

    sort(squares.begin(), squares.end());
            
    return squares;
  }
};

int main() {

  vector<int> nums {-4,-1,0,3,10};

  Solution sol;
  vector<int> squares = sol.sortedSquares(nums);

  for (int i = 0; i < squares.size(); i++) {
    cout << squares[i] << " ";
  }
  cout << endl;
  return 0;
}
