#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

/*
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
  string reverseOnlyLetters(string s) {
    string reversed = s;
    int i = 0;
    int j = reversed.length() - 1;
    while (i < j) {
      bool leftIsChar = (int(reversed[i]) > 64 && int(reversed[i]) < 91) ||
                        (int(reversed[i]) > 96 && int(reversed[i]) < 123);
      bool rightIsChar = (int(reversed[j]) > 64 && int(reversed[j]) < 91) ||
                         (int(reversed[j]) > 96 && int(reversed[j]) < 123);
      if (leftIsChar && rightIsChar) {
        swap(reversed[i], reversed[j]);
        i++;
        j--;
      }
      else if (leftIsChar && !rightIsChar) {
        j--;
      }
      else if (!leftIsChar && rightIsChar){
        i++;
      }
      else {
        i++;
        j--;
      }
    }
    return reversed;
  }
};

int main() {
  Solution sol;
  //string reversed = sol.reverseOnlyLetters("ab-cd");
  string reversed = sol.reverseOnlyLetters("7_28]");
  cout << reversed << endl;
  return 0;
}
