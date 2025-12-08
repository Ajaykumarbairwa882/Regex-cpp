#include <bits/stdc++.h>
using namespace std;

void transpose( vector<vector<int>> &v) {
    int row = v.size();
    int col = v[0].size();

    vector<vector<int>> t(col, vector<int>(row)); 
    
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            t[j][i] = v[i][j]; 
        }
    }

  
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    transpose(v);
    return 0;
}
