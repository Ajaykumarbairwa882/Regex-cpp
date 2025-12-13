#include <bits/stdc++.h>
using namespace std;
void countAllChars(string &s, int i, map<char, int> &freq) {
    if (i == s.length()) return;
    freq[s[i]]++;
    countAllChars(s, i + 1, freq);
}
int main() {
    string s = "rajaram";
    map<char, int> freq;
    countAllChars(s, 0, freq);
     for (auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }
}