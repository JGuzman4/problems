#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        int pop = 0;

        while (x != 0) {
            pop = x % 10;
            x /= 10;

            if (reversed > INT32_MAX/10 || reversed == INT32_MAX/10 && pop > 7)
                return 0;
            if (reversed < INT32_MIN/10 || reversed == INT32_MIN/10 && pop < -8)
                return 0;
            reversed = (reversed * 10) + pop;
        }
        
        return reversed;
    }
};

int main() {

    string x_str;
    getline(cin, x_str);

    int x = stoi(x_str);

    Solution sol;

    int reversed = sol.reverse(x);
    cout << reversed << endl;

    return 0;
}