#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x % 2 != 0) {   
            cout << x << " ";
        }
    }

    return 0;
}
