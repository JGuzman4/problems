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
  bool isCompleteTree(TreeNode* root) {
    bool end = false;
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
      TreeNode* cur = q.front();
      q.pop();
      if (cur == NULL) {
        end = true;
      }
      else {
        if (end) {
          return false;
        }
        q.push(cur->left);
        q.push(cur->right);
      }
    }
    return true;
  }
};

int main() {
  return 0;
}
