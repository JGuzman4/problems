#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle; 
    vector<int> row1;
    row1.push_back(1);
    triangle.push_back(row1);

    for (int i = 1; i < numRows; i++) {
      vector<int> row(i + 1, 1);
      for (int j = 1; j < row.size() - 1; j++) {
        row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
      }
      triangle.push_back(row);
    }
    return triangle;
  }
};

int main() {
    return 0;
}
