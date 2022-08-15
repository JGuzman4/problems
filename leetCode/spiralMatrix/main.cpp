#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> spiral;
    int rowBegin = 0;
    int rowEnd = matrix.size() - 1;
    int columnBegin = 0;
    int columnEnd = matrix[0].size() - 1;


    while (rowBegin <= rowEnd && columnBegin <= columnEnd) {
      for (int i = columnBegin; i <= columnEnd; i++) {
        spiral.push_back(matrix[rowBegin][i]);
      }
      rowBegin++;
      for (int i = rowBegin; i <= rowEnd; i++) {
        spiral.push_back(matrix[i][columnEnd]);
      }
      columnEnd--;
      if (rowBegin <= rowEnd) {
        for (int i = columnEnd; i >= columnBegin; i--) {
          spiral.push_back(matrix[rowEnd][i]);
        }
      }
      rowEnd--;
      if (columnBegin <= columnEnd) {
        for (int i = rowEnd; i >= rowBegin; i--) {
          spiral.push_back(matrix[i][columnBegin]);
        }
      }
      columnBegin++;
    }
    return spiral;
  }
};

int main() {
  vector<vector<int>> matrix  {{1,2,3},{4,5,6},{7,8,9}};
  vector<int> spiral;
  Solution s;
  spiral = s.spiralOrder(matrix);
  for (int i = 0; i < spiral.size(); i++) {
    cout << spiral[i] << " ";
  }
  cout << endl;
  return 0;
}
