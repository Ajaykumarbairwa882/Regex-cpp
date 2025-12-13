#include <bits/stdc++.h>
using namespace std;

string removeSpace(string &s, int i, string &ans) {
    if(i == s.size()) return ans; 
    if(s[i] != ' ') {          
        ans += s[i];         
    }
    return removeSpace(s, i + 1, ans); 
}
int main() {
    string s = "ram is a good boy";
    string ans = "";
    cout << removeSpace(s, 0, ans);
}
