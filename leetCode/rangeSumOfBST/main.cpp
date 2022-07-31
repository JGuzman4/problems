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
  int rangeSumBST(TreeNode* root, int low, int high) {
    return rangeSum(root, 0, low, high);
  }
  int rangeSum(TreeNode* root, int sum, int low, int high) {
    if (root == NULL) {
      return 0;
    }

    if (root->val >= low && root->val <= high) {
      sum += root->val;
    }
    sum += rangeSum(root->left, sum, low, high);
    sum += rangeSum(root->right, sum, low, high);
    return sum;        
  }
};

int main() {
  return 0;
}
