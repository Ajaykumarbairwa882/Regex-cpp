#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    stack<int> s;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    
    while(!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    cout << "Reversed Queue: ";
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    

}
