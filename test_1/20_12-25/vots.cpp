#include <bits/stdc++.h>
using namespace std;

int votesid(vector<int>& votes) {
    unordered_map<int, int> m;
    int n = votes.size();

    for (auto v : votes) {
        m[v]++;
    }
    for(auto x:m){
        if(x.second>n/2){
            return x.first;
        }
    }
    return -1;
}
int main() {
    vector<int> votes = {2, 2, 1, 2, 3, 2, 2};
    cout << votesid(votes); 
}
