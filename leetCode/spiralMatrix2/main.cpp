#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> spiral;
    spiral.resize(n);
    for (int i = 0; i < n; i++) {
      spiral[i].resize(n);
    }
    int rowBegin = 0;
    int rowEnd = n - 1;
    int columnBegin = 0;
    int columnEnd = n - 1;

    int count = 1;

    while (rowBegin <= rowEnd && columnBegin <= columnEnd) {
      for (int i = columnBegin; i <= columnEnd; i++) {
        spiral[rowBegin][i] = count;
        count++;
      }
      rowBegin++;
      for (int i = rowBegin; i <= rowEnd; i++) {
        spiral[i][columnEnd] = count;
        count++;
      }
      columnEnd--;
      if (rowBegin <= rowEnd) {
        for (int i = columnEnd; i >= columnBegin; i--) {
          spiral[rowEnd][i] = count;
          count++;
        }
      }
      rowEnd--;
      if (columnBegin <= columnEnd) {
        for (int i = rowEnd; i >= rowBegin; i--) {
          spiral[i][columnBegin] = count;
          count++;
        }
      }
      columnBegin++;
    }
    return spiral;
  }
};

int main() {
  int n = 3;
  vector<vector<int>> spiral;
  Solution s;
  spiral = s.generateMatrix(n);
  for (int i = 0; i < spiral.size(); i++) {
    for (int j = 0; j < spiral[i].size(); j++) {
      cout << spiral[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
