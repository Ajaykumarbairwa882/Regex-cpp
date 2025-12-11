#include<bits/stdc++.h>
using namespace std;

void reverseStr( string &s,  int i, int j){
  if(i>=j)return;
    swap(s[i],s[j]);
    reverseStr(s,i+1,j-1);
}

int main(){
    string s="hey";
    // vector<int>s={1,2,3,4,5};
    reverseStr(s,0,s.size()-1);

    for(auto x:s){
        cout<<x<< " ";
    }

}