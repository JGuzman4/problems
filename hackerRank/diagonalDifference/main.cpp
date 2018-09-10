#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
  
  long int leftToRight = 0;
  long int rightToLeft = 0;
  for (unsigned int i = 0; i < arr.size(); i++){
      leftToRight += arr[i][i];
  }
  for (unsigned int i = 0; i < arr.size(); i++){
      rightToLeft += arr[i][arr.size()-i-1];
  }

  long int result = leftToRight - rightToLeft;

  return abs(result);

}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  vector<vector<int>> arr(n);
  for (int i = 0; i < n; i++) {
    arr[i].resize(n);

    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  int result = diagonalDifference(arr);

  fout << result << "\n";

  fout.close();

  return 0;
}
