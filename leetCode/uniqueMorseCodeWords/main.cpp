#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int uniqueMorseRepresentations(vector<string>& words) {
    string MORSE[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_set<string> uniqueCodes;
    for (int i = 0; i < words.size(); i++) {
      string transformation = "";
      string word = words[i];
      for (int j = 0; j < word.length(); j++) {
        transformation += MORSE[word[j] - 'a'];
      }
      uniqueCodes.insert(transformation);
    }
    return uniqueCodes.size();
  }
};

int main() {
  vector<string> words {"gin","zen","gig","msg"};
  Solution s;
  int unique = s.spiralOrder(matrix);
  cout << unique << endl;
  return 0;
}
