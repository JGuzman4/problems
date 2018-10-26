#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
  long int largest = -10000000;
  for (unsigned long int i = 1; i < arr.size()-1; i++){
    for (unsigned long int j = 1; j < arr[i].size()-1; j++){
      long int above = arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1];
      long int below = arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
      long int sum = above + below + arr[i][j];
      if (sum > largest)
        largest = sum;
    }
  }
  return largest;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  vector<vector<int>> arr(6);
  for (int i = 0; i < 6; i++) {
    arr[i].resize(6);

    for (int j = 0; j < 6; j++) {
      cin >> arr[i][j];
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  int result = hourglassSum(arr);

  cout << result << "\n";

  fout.close();

  return 0;
}
