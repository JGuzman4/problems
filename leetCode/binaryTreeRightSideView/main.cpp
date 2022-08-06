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
  vector<int> rightSideView(TreeNode* root) {
    vector<int> rightSide;
    dfs(root, rightSide, 0);
    return rightSide;
  }
  void dfs(TreeNode* root, vector<int> &rightSide, int level) {
    if (root == NULL) {
      return;
    }

    if (level == rightSide.size()) {
      rightSide.push_back(root->val);
    }
    else {
      rightSide[level] = root->val;
    }
    dfs(root->left, rightSide, level + 1);
    dfs(root->right, rightSide, level + 1);
  }
};

int main() {
  return 0;
}
