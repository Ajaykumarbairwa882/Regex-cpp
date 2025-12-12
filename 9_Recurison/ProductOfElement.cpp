#include <bits/stdc++.h>
using namespace std;

int productRec(vector<int>& v, int i) {
    if (i == v.size()) return 1;  
    return v[i] * productRec(v, i + 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    cout << "Product = " << productRec(v, 0);
    return 0;
}
