#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int peakIndexInMountainArray(vector<int>& arr) {
    int i = 0;
    int j = 0;
    int largest = -1;
    int largestIndex = 0;

    for (i = 1, j = (arr.size() / 2); i < (arr.size() / 2), j < arr.size(); i++, j++) {
      if (arr[i] > largest) {
        largest = arr[i];
        largestIndex = i;
      }
      if (arr[j] > largest) {
        largest = arr[j];
        largestIndex = j;
      }
    }
    return largestIndex;
  }
};

int main() {

  //vector<int> arr {0,10,5,2};
  vector<int> arr {3,4,5,1};
  Solution sol;
  int largest = sol.peakIndexInMountainArray(arr);
  cout << largest << endl;
  return 0;
}
