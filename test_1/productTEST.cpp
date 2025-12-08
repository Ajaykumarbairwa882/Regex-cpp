
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>nums={1,2,3,4};
   int n = nums.size();
    vector<int> ans(n, 1);
    
    int l= 1;
    for (int i = 0; i < n; i++) {
        ans[i] = l;
        l =l* nums[i];
    }
    
    int r = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i]= ans[i]*r;
       r =r* nums[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}

