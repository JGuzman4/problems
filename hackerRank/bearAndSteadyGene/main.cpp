#include <bits/stdc++.h>

using namespace std;

// Complete the steadyGene function below.
int steadyGene(string gene) {


  int max = gene.length()/4;
  int count[128];

  for (unsigned int i = 0; i < gene.length(); i++)
    count[gene[i]]++;

  string s = "ACGT";
  bool steady = true;
  for (unsigned int i = 0; i < s.length(); i++){
    if (count[s[i]] > max)
      steady = false;
  }
  if (steady == true)
    return 0;

  int r = 0;
  int ans = gene.length();

  for (unsigned int i = 0; i < gene.length(); i++){
    while (count['A'] > max ||
           count['C'] > max ||
           count['G'] > max ||
           count['T'] > max){
      if (r == gene.length())
        return ans;
      count[gene[r]]--;
      r++;
    }
    if (r-i < ans)
      ans = r-i;
    count[gene[i]]++;
  }

  return ans;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string gene;
  getline(cin, gene);

  int result = steadyGene(gene);

  cout << result << "\n";

  fout.close();

  return 0;
}
