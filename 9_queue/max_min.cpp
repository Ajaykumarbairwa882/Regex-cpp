#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(50);
    q.push(5);
    q.push(30);
    q.push(25);

    int mn = INT_MAX;
    int mx = INT_MIN;

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x < mn) mn = x;
        if(x > mx) mx = x;
    }

    cout << "Minimum: " << mn << endl;
    cout << "Maximum: " << mx << endl;

    return 0;
}
