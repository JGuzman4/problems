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
  int total;
  int distributeCoins(TreeNode* root) {
    total = 0;
    dc(root);
    return total;
  }
  int dc(TreeNode* root) {
    if (root == NULL) {
      return 0;
    }
    int left = dc(root->left);
    int right = dc(root->right);

    total += abs(left) + abs(right);

    return root->val + left + right - 1;
  }
};

int main() {
  return 0;
}
