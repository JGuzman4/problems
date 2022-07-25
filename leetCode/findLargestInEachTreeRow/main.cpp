#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *   int val;
 *   TreeNode *left;
 *   TreeNode *right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 **/

class Solution {
public:
  vector<int> largestValues(TreeNode* root) {
    vector<int> largest;
    dfs(root, largest, 0);
    return largest;
  }

  void dfs(TreeNode* root, vector<int> &largest, int level) {
    if (root == NULL) {
      return;
    }

    if (level == largest.size()) {
      largest.push_back(root->val);
    }
    else {
      largest[level] = max(largest[level], root->val);
    }
    dfs(root->left, largest, level + 1);
    dfs(root->right, largest, level + 1);
  }
};

int main() {
  return 0;
}
