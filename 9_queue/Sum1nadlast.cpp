#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int first = q.front();  
    int last  = q.back();    

    int sum = first + last;

    cout << "First element: " << first << endl;
    cout << "Last element: " << last << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}
