#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int longestSub(vector<int> n) {
    int larg = INT_MIN; 

    for (int i = 0; i < n.size(); i++) {
        int prefix = 0;
        for (int j = i; j < n.size(); j++) {  
            prefix += n[j];
            larg = max(larg, prefix);
        }
    }
    return larg;
}

int main() {
    vector<int> nums = {1, 2, 3, -1, -2};
    int result = longestSub(nums);
    cout << "Maximum Subarray Sum = " << result << endl;
    return 0;
}
