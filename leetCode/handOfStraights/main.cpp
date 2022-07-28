#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  bool isNStraightHand(vector<int>& hand, int groupSize) {

    int largest = 0;
    for (int i = 0; i < hand.size(); i++) {
      if (hand[i] > largest)
        largest = hand[i];
    }

    map<int, int> card_counts;
    map<int, int>::iterator it;

    for (int card = 0; card < hand.size(); card++) {
      it = card_counts.find(hand[card]);
      if (it == card_counts.end()) {
        card_counts[hand[card]] = 1;
      }
      else {
        card_counts[hand[card]]++;
      }
    }

    while (card_counts.size() > 0) {
      it = card_counts.begin();
      int first_card = it->first;
      for (int i = first_card; i < first_card + groupSize; i++) {
        if (card_counts.find(i) == card_counts.end()) {
          return false;
        }
        int count = card_counts[i];
        if (count == 1) {
          card_counts.erase(i);
        }
        else {
          card_counts[i] -= 1;
        }
      }
    }

    return true;
  }
};

int main() {

  //vector<int> hand {1,2,3,6,2,3,4,7,8};
  //int groupSize = 3;

  //vector<int> hand {1,2,3,4,5};
  //int groupSize = 4;

  vector<int> hand {5,1};
  int groupSize = 1;

  Solution sol; 
  bool isStraightHand = sol.isNStraightHand(hand, groupSize);

  if (isStraightHand) {
    cout << "true" << endl;
  }
  else {
    cout << "false" << endl;
  }
  return 0;
}
