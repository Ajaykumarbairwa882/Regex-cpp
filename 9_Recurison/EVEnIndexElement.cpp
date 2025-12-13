#include <bits/stdc++.h>
using namespace std;

void printEvenIndex(vector<int> &arr, int i) {
    if(i >= arr.size()) return; 
    cout << arr[i] << " ";     
    printEvenIndex(arr, i + 2); 
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    printEvenIndex(arr, 0);
}
