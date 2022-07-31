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
  bool isUnivalTree(TreeNode* root) {
    if (root == NULL) {
      return true;
    }
    return univaled(root, root->val);
  }
  bool univaled(TreeNode* root, int val) {
    if (root == NULL) {
      eturn true;
    }
    if (root->val != val) {
      return false;
    }
    if (univaled(root->left, val) == false || univaled(root->right, val) == false) {
      return false;
    }
    return true;
  }
};

int main() {
  return 0;
}
