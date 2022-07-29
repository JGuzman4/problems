#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
*/

class Solution {
public:
  ListNode* swapPairs(ListNode* head) {
    if (head == NULL) {
      return NULL;
    }
    ListNode* tmp = new ListNode(0);
    tmp->next = head;
    ListNode* current = head;

    while (current->next != NULL && current->next->next != NULL) {
      ListNode* first = current->next;
      ListNode* second = current->next->next;

      first->next = second->next;
      current->next = second;
      current->next->next = first;
      current = current->next->next;

    }

    return tmp->next;
  }
};

int main() {
  return 0;
}
