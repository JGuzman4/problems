#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

/**
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
  int findBottomLeftValue(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      root = q.front();
      q.pop();
      if (cur->right != NULL) {
        q.push(cur->right);
      }
      if (cur->left != NULL) {
        q.push(cur->left);
      }
    }
    return root->val;
  }
};

int main() {
  return 0;
}
