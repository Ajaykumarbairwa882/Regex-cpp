#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {12, -1, -7, -8, -15, 30, 16,28};
    int k = 3;
    int i = 0, j = 0;

    deque<int> dq;  // store indices of negative values

    vector<int> ans;

    while (j < v.size()) {

        // If current element is negative, push into deque
        if (v[j] < 0) dq.push_back(j);

        // Window not reached size k yet
        if (j - i + 1 < k) {
            j++;
        }
        else {
            // ✔ Window size == k → record answer
            if (!dq.empty()) {
                ans.push_back(v[dq.front()]);
            } else {
                ans.push_back(0); // no negative → push 0 (or anything you want)
            }

            // ✔ Before sliding, remove element going out of window
            if (!dq.empty() && dq.front() == i) {
                dq.pop_front();
            }

            i++;
            j++;
        }
    }

    // print results
    for (auto x : ans) cout << x << " ";
    // cout<<v.size()-k+1;
}
