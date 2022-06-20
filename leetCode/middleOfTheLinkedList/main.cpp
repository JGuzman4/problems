#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode* middleNode(ListNode* head) {
    if (head == NULL) {
      return NULL;
    }
    ListNode* slow = head;
    ListNode* fast = head->next;;

    while (fast != NULL && fast->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
    }
    if (fast == NULL)
      return slow;
    return slow->next;
  }
};

int main() {
  return 0;
}
