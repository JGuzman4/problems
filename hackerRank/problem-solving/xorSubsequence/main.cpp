#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'xorSubsequence' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts LONG_INTEGER_ARRAY a as parameter.
 */

vector<int> xorSubsequence(vector<long> a) {

    int largest = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] > largest)
            largest = a[i];
    }
    long results[largest*2] {0};
    for (int i = 0; i < a.size(); i++) {
        results[a[i]]++;
    }

    for (int j = 1; j < a.size(); j++) {
        for (int i = 0; i < j; i++) {
            int r = a[i];
            for (int x = i + 1; x <= j; x++) {
                r = r ^ a[x];
            }
            results[r]++;
        }
    }
    

    int index = 0;
    int count = 0;

    for (int i = 0; i < largest*2; i++) {
        if (results[i] > count) {
            index = i;
            count = results[i];
        }
    }

    cout << index << " " << count << endl;

    vector<int> v;

    v.push_back(index);
    v.push_back(count);

    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_count_temp;
    getline(cin, a_count_temp);

    int a_count = stoi(ltrim(rtrim(a_count_temp)));

    vector<long> a(a_count);

    for (int i = 0; i < a_count; i++) {
        string a_item_temp;
        getline(cin, a_item_temp);

        long a_item = stol(ltrim(rtrim(a_item_temp)));

        a[i] = a_item;
    }

    vector<int> result = xorSubsequence(a);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}