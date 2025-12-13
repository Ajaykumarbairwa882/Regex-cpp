#include <bits/stdc++.h>
using namespace std;
void doubleArray(vector<int> &arr, int i) {
    if(i == arr.size()) return; 
    arr[i] = arr[i] * 2;  
    doubleArray(arr, i + 1); 
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    doubleArray(arr, 0);
  
    for(int x : arr) cout << x << " ";
}
