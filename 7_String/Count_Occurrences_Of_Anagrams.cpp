#include <bits/stdc++.h>
using namespace std;

int main() {
    string txt = "aabaabaabaaa";
    string pat = "aaba";

    unordered_map<char,int> mp;
    for(char c : pat) mp[c]++;

    int i = 0, j = 0;
    int k = pat.size();
    int count = mp.size();
    int ans = 0;

    while (j < txt.size()) {

        if (mp.find(txt[j]) != mp.end()) {
            mp[txt[j]]--;
            if (mp[txt[j]] == 0)
                count--;
        }

        if (j - i + 1 < k) {
            j++;
        }
        else {
            if (count == 0)
                ans++;

            if (mp.find(txt[i]) != mp.end()) {
                if (mp[txt[i]] == 0)
                    count++;
                mp[txt[i]]++;
            }

            i++;
            j++;
        }
    }

    cout << ans;
}
