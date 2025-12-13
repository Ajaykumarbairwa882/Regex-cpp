#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int>& v) {
    int left = 0, mid = 0;
    int right = v.size() - 1;

    while (mid <= right) {
        if (v[mid] == 0) {
            swap(v[mid], v[left]);
            left++;
            mid++;
        }
        else if (v[mid] == 1) {
            mid++;
        }
        else { 
            swap(v[mid], v[right]);
            right--;
        }
    }
}

int main() {
    vector<int> v = {1,0,1,0,1,2,0,2,0};

    sort012(v);

    for (auto x : v)
        cout << x << " ";
}
