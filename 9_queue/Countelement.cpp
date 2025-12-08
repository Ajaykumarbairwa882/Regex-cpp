#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    int count = 0;

    while(!q.empty()) {
        q.pop();
        count++;
    }

    cout << "Total elements: " << count << endl;

    return 0;
}
