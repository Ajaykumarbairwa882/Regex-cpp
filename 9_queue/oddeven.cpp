#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

   
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
    q.push(30);

 
    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x % 2 == 0)
            cout << x << " is Even\n";
        else
            cout << x << " is Odd\n";
    }

    return 0;
}
