#include <bits/stdc++.h>

using namespace std;

/*
 *  * Complete the timeConversion function below.
 *   */
string timeConversion(string s) {


  string hr = s.substr(0,2);
  string mm = s.substr(3,2);
  string ss = s.substr(6,2);
  string meridiem = s.substr(8,2);

  if (meridiem == "PM" && hr != "12"){
    int hour = stoi(hr);
    hour += 12;
    hr = to_string(hour);
  }
  else if (meridiem == "AM" && hr == "12"){
    hr = "00";
  }

  return hr + ":" + mm + ":" + ss;

}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string result = timeConversion(s);

  cout << result << "\n";

  fout.close();

  return 0;

}

