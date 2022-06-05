#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
  int maxDepth(TreeNode* root) {

    if (root == NULL) {
      return 0;
    }

    int depth = 1;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    if (left < right) {
      depth += right;
    }
    else {
      depth += left;
    }
    return depth;
  }
};

int main() {
  return 0;
}
