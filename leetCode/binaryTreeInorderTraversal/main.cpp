#include <bits/stdc++.h>
#include <iostream>
#include <string>

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;

        if (root == NULL) {
            return nodes;
        }

        vector<int> leftChildren = inorderTraversal(root->left);
        for (int i = 0; i < leftChildren.size(); i++) {
            nodes.push_back(leftChildren[i]);
        }
        nodes.push_back(root->val);
        vector<int> rightChildren = inorderTraversal(root->right);
        for (int i = 0; i < rightChildren.size(); i++) {
            nodes.push_back(rightChildren[i]);
        }

        return nodes;
    }
};

int main() {
    string nums_str;
    getline(cin, nums_str);

    vector<int> nums;

    stringstream ss(nums_str);
    char delim = ' ';
    string s;

    while (getline(ss, s, delim)) {
        nums.push_back(stoi(s));
    }

    Solution sol;

    vector<int> sums = sol.invertTree(root);

    for (int i = 0; i < sums.size(); i++) {
        cout << sums[i];
        if (i != sums.size() - 1) {
            cout << " ";
        }
    }
    cout << "\n";
    return 0;
}