#include <bits/stdc++.h>
using namespace std;

int firstIndexRec(vector<int> &arr, int x, int i) {
    if(i == arr.size()) return -1; 
    if(arr[i] == x) return i;
    return firstIndexRec(arr, x, i + 1); 
}
int main() {
    vector<int> arr = {5, 3, 7, 3, 9};
    int x = 3;
    cout << x << " is present index ->  " << firstIndexRec(arr, x, 0);
}
