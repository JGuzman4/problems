#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution {
public:
  bool canVisitAllRooms(vector<vector<int>>& rooms) {

    vector<int> visited(rooms.size(), 0);
    queue<int> q;

    visited[0] += 1;
    for (int i = 0; i < rooms[0].size(); i++) {
      q.push(rooms[0][i]);
    }

    while (!q.empty()) {
      int room = q.front();
      q.pop();
      if (visited[room] == 0) {
        for (int i = 0; i < rooms[room].size(); i++) {
          q.push(rooms[room][i]);
        }
        visited[room] += 1;
      }
    }

    for (int i = 0; i < visited.size(); i++) {
      if (visited[i] == 0)
        return false;
    }
    return true;
  }
};

int main() {

  vector<vector<int>> rooms {
    {1},{2},{3},{}
  };
  //vector<vector<int>> rooms {
  //  {{1,3},{3,0,1},{2},{0}}
  //};
  Solution sol;
  bool visitAllRooms = sol.canVisitAllRooms(rooms);
  if (visitAllRooms) {
    cout << "true" << endl;
  }
  else {
    cout << "false" << endl;
  }
  return 0;
}
