#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row=v.size();
    int col=v[0].size();
    // for(int i=0; i<row ;i++){
    //     reverse(v[i].begin(),v[i].end());
    // }
  for(int i=0;i<row;i++){
      int m=0;
    int n=v[i].size()-1;

    while(m<=n){
            swap(v[i][m],v[i][n] );
            m++;
            n--;
    }
  }
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}