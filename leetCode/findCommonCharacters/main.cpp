#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  vector<string> commonChars(vector<string>& words) {

    vector<string> common;
    int min_chars[26];

    for (int i = 0; i < 26; i++) {
      min_chars[i] = 100001;
    }

    for (int i = 0; i < words.size(); i++) {
      int word_chars[26];
      for (int i = 0; i < 26; i++) {
        word_chars[i] = 0;
      }

      for (int j = 0; j < words[i].length(); j++) {
        word_chars[words[i][j] - 'a']++;
      }

      for (int j = 0; j < 26; j++) {
        min_chars[j] = min(min_chars[j], word_chars[j]);
      }
    }

    for (int i = 0; i < 26; i++) {
      while (min_chars[i] > 0) {
        char c = char(i + 97);
        string s(1, c);
        common.push_back(s);
        min_chars[i]--;
      }
      
    }
    
    return common;
  }
};

int main() {

  //vector<string> words {"bella","label","roller"};
  vector<string> words {"acabcddd","bcbdbcbd","baddbadb","cbdddcac","aacbcccd","ccccddda","cababaab","addcaccd"};
  
  Solution sol;
  vector<string> common = sol.commonChars(words);

  for (int i = 0; i < common.size(); i++) {
    cout << common[i] << " ";
  }
  cout << endl;
  
  return 0;
}
