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
  void flatten(TreeNode* root) {
    vector<int> nodes = inorderTraversal(root);
    if (nodes.size() == 0) {
      return;
    }
    root->val = nodes[0];
    TreeNode* cur = root;
    for (int i = 1; i < nodes.size(); i++) {
      cur->left = NULL;
      if (cur->right == NULL) {
        cur->right = new TreeNode(nodes[i]);
        cur = cur->right;
      }
      else {
        cur = cur->right;
        cur->val = nodes[i];
      }
    }
  }
  vector<int> inorderTraversal(TreeNode* root) {
      vector<int> nodes;
      if (root == NULL) {
          return nodes;
      }
      nodes.push_back(root->val);
      vector<int> leftChildren = inorderTraversal(root->left);
      for (int i = 0; i < leftChildren.size(); i++) {
          nodes.push_back(leftChildren[i]);
      }
      vector<int> rightChildren = inorderTraversal(root->right);
      for (int i = 0; i < rightChildren.size(); i++) {
          nodes.push_back(rightChildren[i]);
      }
      return nodes;
  }
};

int main() {
  return 0;
}
