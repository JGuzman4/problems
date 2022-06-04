#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
  vector<int> twoSum(vector<int>& numbers, int target) {

    vector<int> result;

    int a_pointer = 0;
    int b_pointer = numbers.size() - 1;;

    while (a_pointer <= b_pointer) {
      int sum = numbers[a_pointer] + numbers[b_pointer];
      if (sum > target) {
        b_pointer -= 1;
      }
      else if (sum < target) {
        a_pointer += 1;
      }
      else {
        result.push_back(a_pointer + 1);
        result.push_back(b_pointer + 1);
        return result;
      }
    }
    result.push_back(a_pointer + 1);
    result.push_back(b_pointer + 1);
    return result;
  
  }
};

int main() {
    return 0;
}
