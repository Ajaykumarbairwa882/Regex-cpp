#include <bits/stdc++.h>
using namespace std;

vector<int> Leader(vector<int> &v) {
    int n = v.size();
    vector<int> result;

    int maxRight = INT_MIN;

    for (int i = n - 1; i >= 0; i--) {
        if (v[i] >= maxRight) {
            result.push_back(v[i]);
            maxRight = v[i];
        }
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> v = {16, 17, 4, 3, 5, 2};
    vector<int> ans = Leader(v);

    for (auto x : ans) {
        cout << x << " ";
    }
}
