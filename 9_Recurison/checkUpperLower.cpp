#include <bits/stdc++.h>
using namespace std;

void countCase(string &s, int i, int &upper, int &lower) {
    if(i == s.size()) return;

    if(isupper(s[i])) upper++;
    else if(islower(s[i])) lower++;

    countCase(s, i + 1, upper, lower);
}

int main() {
    string s = "AJAYkumar";
    int upper = 0, lower = 0;

    countCase(s, 0, upper, lower);

    cout << "Upper: " << upper << endl;
    cout << "Lower: " << lower << endl;
}
