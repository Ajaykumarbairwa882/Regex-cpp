#include <bits/stdc++.h>
using namespace std;

string vowelrem(string &s, int i, string &ans) {
    if (i == s.size()) return ans;

    char c = tolower(s[i]);

    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
        ans += s[i];
    }

    return vowelrem(s, i + 1, ans);
}

int main() {
    string s = "leetcode";
    string ans = "";
    cout << vowelrem(s, 0, ans);
}
