#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int reversed = 0;
        int pop = 0;

        int i = x;
        while (i != 0) {
            pop = i % 10;
            i /= 10;

            if (reversed > INT32_MAX/10 || reversed == INT32_MAX/10 && pop > 7)
                return 0;

            reversed = (reversed * 10) + pop;
        }

        if (reversed == x)
            return true;
        else
            return false;
    }
};

int main() {

    string x_str;
    getline(cin, x_str);

    int x = stoi(x_str);

    Solution sol;

    bool pal = sol.isPalindrome(x);
    if (pal == true)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}