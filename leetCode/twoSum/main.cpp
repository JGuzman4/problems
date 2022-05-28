#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        for (int i = 0; i < nums.size(); i++) {
          for (int j = i; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target  && i != j) {
              sum.push_back(i);
              sum.push_back(j);
              return sum;
            }
          }
        }
        return sum;
    }
};

int main() {

    string nums_str;
    getline(cin, nums_str);

    vector<int> nums;

    stringstream ss(nums_str);
    char delim = ' ';
    string s;

    while (getline(ss, s, delim)) {
        nums.push_back(stoi(s));
    }

    string target_str;
    getline(cin, target_str);

    int target = stoi(target_str);

    Solution sol;

    vector<int> sums = sol.twoSum(nums, target);

    for (int i = 0; i < sums.size(); i++) {
        cout << sums[i];
        if (i != sums.size() - 1) {
            cout << " ";
        }
    }
    cout << "\n";
    return 0;
}