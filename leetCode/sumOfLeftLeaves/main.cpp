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
  int sumOfLeftLeaves(TreeNode* root) {
    int total = 0;
    sum(root, total);
    return total;
  }
  void sum(TreeNode* root, int &total) {
    if (root == NULL) {
      return;
    }
    if (root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
      total += root->left->val;
    }
    sum(root->right, total);
    sum(root->left, total);
  }
};

int main() {
  return 0;
}
