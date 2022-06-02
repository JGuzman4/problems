#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> preorder(Node* root) {

        vector<int> nodes;

        if (root == NULL) {
            return nodes;
        }

        nodes.push_back(root->val);
        for (int i = 0; i < root->children.size(); i++) {
            nodes.push_back(root->children[i]->val);
            preorder(root->children[i]);
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