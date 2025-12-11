#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    if(n == 0) return 0;

    if(n % 2 == 0) {
        return n + sum(n - 1);
    } else {
        return sum(n - 1);
    }
}

int main() {
    cout << sum(10);
    return 0;
}
                                                    