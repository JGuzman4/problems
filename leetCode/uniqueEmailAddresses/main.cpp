#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int numUniqueEmails(vector<string>& emails) {

    set<tuple<string, string>> uniqueEmails;

    for (int i = 0; i < emails.size(); i++) {
      int it = emails[i].find("@");
      string localName = emails[i].substr(0, it);
      string domainName = emails[i].substr(it + 1, emails[i].size());

      it = localName.find("+");
      localName = localName.substr(0, it);

      string localNameUpdated = "";
      for (int j = 0; j < localName.size(); j++) {
        if (localName[j] != '.') {
          localNameUpdated += localName[j];
        }
      }
      tuple<string, string> email;
      email = make_tuple(localNameUpdated, domainName);
      uniqueEmails.insert(email);
    }

    return uniqueEmails.size();
  }
};

int main() {
  vector<string> emails {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
  Solution s;
  int num = s.numUniqueEmails(emails);
  cout << num << endl;
  return 0;
}
