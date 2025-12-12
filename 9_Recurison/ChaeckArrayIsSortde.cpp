#include <bits/stdc++.h>
using namespace std;

bool isSortedAsc(vector<int>& v, int i) {
    if (i == v.size() - 1) return true;
    if (v[i] > v[i + 1]) return false;
    return isSortedAsc(v, i + 1);
}

bool isSortedDesc(vector<int>& v, int i) {
    if (i == v.size() - 1) return true;
    if (v[i] < v[i + 1]) return false;
    return isSortedDesc(v, i + 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    if (isSortedAsc(v, 0))
        cout << "The array is sorted in ascending order.\n";
    else if (isSortedDesc(v, 0))
        cout << "The array is sorted in descending order.\n";
    else
        cout << "The array is not sorted.\n";

    return 0;
}
